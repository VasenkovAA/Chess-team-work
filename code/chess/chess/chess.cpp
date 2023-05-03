#include <iostream>

using namespace std;
//блок с кодировками цвета текста в консли
#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[33m"
#define BLUE "\033[34m"


//перечисление какие фигуры у нас есть.
enum TFigure_type { pawn, rook, knight, bishop, queen, king };//пешка, ладья, конь, слон, королева, король
enum TFigure_color { no_color, black, withe };//цвет фигуры
enum ELogic_error { invalid_index };//Возможные ошибки



//Класс координат
class TCoord {
private:
    short int x;
    short int y;
public:
    void set_x(int _x) { if (_x > -2 && _x < 8) { x = _x; } else throw invalid_index; }
    void set_y(int _y) { if (_y > -2 && _y < 8) { y = _y; } else throw invalid_index; }
    short int get_x() { return x; }
    short int get_y() { return y; }
    TCoord& operator=(const TCoord& tmp) {
        x = tmp.x;
        y = tmp.y;
        return *this;
    }
    bool operator==(const TCoord& tmp) const {
        return ((x == tmp.x) && (y == tmp.y));
    }
    friend ostream& operator<<(ostream& os, const TCoord& coord);
};
ostream& operator<<(ostream& os, const TCoord& coord) {
    os << "X = " << coord.x << "Y = " << coord.y;
    return os;
}

//массив координат, координату в него можно добавлять с помощю add_cooия новойrd(), кула вы передаете
//или координаты x,y по отдельности либо обьктом TCoord. Сейчас функционала у него нет, но потом он появится.
//на данном этапе вам нужна только функции добавления новой координаты
class TCoordMass {
private:
    short int count;
    TCoord* mass;
public:
    int get_count() { return count; }
    void add_coord(TCoord& _tmp) { add_coord(_tmp.get_x(), _tmp.get_y()); }
    void add_coord(short int x, short int y) {
        TCoord* tmp_mass = new TCoord[count + 1];
        for (short int i = 0; i < count; i++) { tmp_mass[i] = mass[i]; }
        tmp_mass[count].set_x(x);
        tmp_mass[count].set_y(y);
        delete[] mass;
        mass = tmp_mass;
        count++;
    }
    void print() {
        for (int i = 0; i < count; i++) {
            cout << "X: " << mass[i].get_x() << "Y: " << mass[i].get_y() << endl;
        }
    }
    TCoordMass() { mass = nullptr; count = 0; }
    TCoordMass(TCoordMass& tmp) {
        mass = new TCoord[tmp.count];
        count = tmp.count;
        for (int i = 0; i < tmp.count; i++) {
            mass[i] = tmp.mass[i];
        }
    }
    ~TCoordMass() { delete[] mass; }
    TCoord operator[](int i) {
        if (i >= 0 && i < count)
            return mass[i]; else throw invalid_index;
    }
    TCoordMass& operator=(const TCoordMass& tmp) {
        delete[]mass;
        mass = new TCoord[tmp.count];
        count = tmp.count;
        for (int i = 0; i < tmp.count; i++) {
            mass[i] = tmp.mass[i];
        }
    }
    friend ostream& operator<<(ostream& os, const TCoordMass& coord_mass);
};
ostream& operator<<(ostream& os, const TCoordMass& coord_mass) {
    os << endl;
    os << ORANGE << "\t\t\tOBJECT NAME = " << typeid(coord_mass).name() << RESET << endl;
    os << "coord count = " << coord_mass.count << endl;
    for (int i = 0; i < coord_mass.count; i++) {
        os << "index[" << i << "] X = " << coord_mass.mass[i].get_x() << "\tY = " << coord_mass.mass[i].get_y() << endl;
    }
    return os;
}
//класс - общий предок всех фигур, нужен для того чтобы хранить все фигуры в одном массиве.
class TFigure {
protected:
    short int id;//Уникальный номер фигуры на поле (от 0 до 31). Задается в конструкторе наследников.
    TFigure_type type;//Тип фигуры задается в конструкторе наследующих классов.
    TCoord coord;//координата фигуры, если фигура съедена - (-1,-1)
    TFigure_color color;//цвет фигуры
    virtual TCoordMass& get_list_coord() = 0;
    virtual bool check_move(TCoord& coord_last) = 0;
    virtual void move_to(TCoord& coord_last) = 0;
};
/*Массив фигур, нужен для корректной работы всех механизмов в классе TGame.
Должен содержать в себе перегрузки индексации, = , и другие, которые понадобятся в классе TGame
Он организует быстрый и удобный доступ к фигурам по координатам и по индексу,
если нужны какие-либо еще функции - добавляйте, я расписал лишь основные.
*/
class TFigure_mass {
    TFigure* mass;
    short int count;
public:
    TFigure& operator[](int i) {
        if (i >= 0 && i < count) return mass[i];
        else throw invalid_index;
    }
    TFigure& operator[](TCoord coord) {

    }
};

//Класс пешка
class TPawn :public TFigure {
public:
    TPawn();
    TPawn(short int _id, TCoord _coord, TFigure_color _color);
    TPawn(TPawn& tmp);
    ~TPawn() {}

    TCoordMass& get_list_coord();
    bool check_move(TCoord& coord_last);
    void move_to(TCoord& coord_last);
};
TPawn::TPawn() {
    id = -1;
    type = pawn;
    color = no_color;
    coord.set_x(-1);
    coord.set_y(-1);
}
TPawn::TPawn(short int _id, TCoord _coord, TFigure_color _color) {
    type = pawn;
    id = id;
    coord.set_x(_coord.get_x());
    coord.set_y(_coord.get_y());
    color = _color;
}
TPawn::TPawn(TPawn& tmp) {
    type = pawn;
    id = tmp.id;
    coord.set_x(tmp.coord.get_x());
    coord.set_y(tmp.coord.get_y());
    color = tmp.color;
}
void TPawn::move_to(TCoord& coord_last) {
    coord.set_x(coord_last.get_x());
    coord.set_y(coord_last.get_y());
}
bool TPawn::check_move(TCoord& coord_last) {
    if (color == black) {
        if ((coord.get_y() - 1 == coord_last.get_y() && (coord.get_x() == coord_last.get_x()))) { return 1; }
        else
        {
            if ((coord.get_y() == 7) && (coord.get_y() - 2 == coord_last.get_y() && (coord.get_x() == coord_last.get_x()))) return 1; else return 0;

        }
    }
    else if (color == withe) {
        if ((coord.get_y() + 1 == coord_last.get_y() && (coord.get_x() == coord_last.get_x()))) { return 1; }
        else
        {
            if ((coord.get_y() == 1) && (coord.get_y() + 2 == coord_last.get_y() && (coord.get_x() == coord_last.get_x()))) return 1; else return 0;

        }
    }
}
TCoordMass& TPawn::get_list_coord() {
    TCoordMass* mass;
    mass = new TCoordMass;
    //cout << endl << "function out: get_list_coord" << endl;
    if (color == withe) {
        if (coord.get_y() == 1) {
            mass->add_coord(coord.get_x(), coord.get_y() + 1);
            mass->add_coord(coord.get_x(), coord.get_y() + 2);
            //cout<< "X: "<<coord.get_x()<<"\tY: "<<coord.get_y()+1 <<endl;
            //cout<< "X: "<<coord.get_x()<<"\tY: "<<coord.get_y()+2 <<endl;
        }
        else {
            if (coord.get_y() == 7) {

            }
            else {
                mass->add_coord(coord.get_x(), coord.get_y() + 1);
                //cout << "X: " << coord.get_x() << "\tY: " << coord.get_y() + 1 << endl;
            }
        }
    }
    else if (color == black) {
        if (coord.get_y() == 6) {
            mass->add_coord(coord.get_x(), coord.get_y() - 1);
            mass->add_coord(coord.get_x(), coord.get_y() - 2);
            //cout << "X: " << coord.get_x() << "\tY: " << coord.get_y() - 1 << endl;
            //cout << "X: " << coord.get_x() << "\tY: " << coord.get_y() - 2 << endl;
        }
        else {
            if (coord.get_y() == 0) {

            }
            else {
                //cout << "X: " << coord.get_x() << "\tY: " << coord.get_y() - 1 << endl;
                mass->add_coord(coord.get_x(), coord.get_y() - 1);
            }
        }
    }


    //cout << "function: get_list_coord - END" << endl;
    return *mass;
}
//Класс король
class TKing :public TFigure {
public:
    TKing();//конструктор по умолчанию
    TKing(short int _id, TCoord _coord, TFigure_color _color);//конструктор, которым бы будем пользоваться в классе TDeck
    TKing(TKing& tmp);//конструктор копирования
    ~TKing() {};//деструктор

    TCoordMass& get_list_coord();//возвращает список координат, куда фигура может сдвинуться, начальные координаты берет от свего обьекта.
    bool check_move(TCoord& coord_last);//возвращает true если фигура может передвинуться на переданные координаты.
    void move_to(TCoord& coord_last);//пердвигает фигуру на переданные координаты без проверки(просто меняет свое поле TCoord). 
};
TKing::TKing(short int _id, TCoord _coord, TFigure_color _color) {
    type = king;
    id = id;
    coord.set_x(_coord.get_x());
    coord.set_y(_coord.get_y());
    color = _color;
}
TKing::TKing(TKing& tmp) {
    type = king;
    id = tmp.id;
    coord.set_x(tmp.coord.get_x());
    coord.set_y(tmp.coord.get_y());
    color = tmp.color;
}
TKing::TKing() {
    id = -1;
    type = king;
    color = no_color;
    coord.set_x(-1);
    coord.set_y(-1);
}
void TKing::move_to(TCoord& coord_last) {
    coord.set_x(coord_last.get_x());
    coord.set_y(coord_last.get_y());
}
bool TKing::check_move(TCoord& coord_last) {
    if ((abs(coord_last.get_x() - coord.get_x()) <= 1) && (abs(coord_last.get_y() - coord.get_y()) <= 1)) return true;
    else return 0;
};
TCoordMass& TKing::get_list_coord() {
    TCoordMass* mass;
    mass = new TCoordMass;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0)continue; else {
                int tmp_x = coord.get_x() + i, tmp_y = coord.get_y() + j;
                if (tmp_x >= 0 && tmp_x < 8 && tmp_y >= 0 && tmp_y < 8) {
                    mass->add_coord(tmp_x, tmp_y);
                    //cout << "X: " << tmp_x << "\tY: " << tmp_y << endl;
                }
            }
        }

    }
    return *mass;
}
//Класс королева
class TQueen :public TFigure {
public:
    TQueen() {};//конструктор по умолчанию
    TQueen(TQueen& tmp) {};//конструктор копирования
    ~TQueen() {};//деструктор

    //TCoordMass& get_list_coord()  {};//возвращает список координат, куда фигура может сдвинуться, начальные координаты берет от свего обьекта.
    //bool check_move(TCoord& coord_last) {};//возвращает true если фигура может передвинуться на переданные координаты.
    void move_to(TCoord& coord_last) {};//пердвигает фигуру на переданные координаты без проверки(просто меняет свое поле TCoord). 
};
//Класс ладья
class TRook :public TFigure {
public:
    TRook() {};//конструктор по умолчанию
    TRook(TRook& tmp) {};//конструктор копирования
    ~TRook() {};//деструктор

    //TCoordMass& get_list_coord() {};//возвращает список координат, куда фигура может сдвинуться, начальные координаты берет от свего обьекта.
    //bool check_move(TCoord& coord_last) {};//возвращает true если фигура может передвинуться на переданные координаты.
    void move_to(TCoord& coord_last) {};//пердвигает фигуру на переданные координаты без проверки(просто меняет свое поле TCoord). 
};
//Класс слон
class TBishop :public TFigure {
public:
    TBishop() {};//конструктор по умолчанию
    TBishop(TBishop& tmp) {};//конструктор копирования
    ~TBishop() {};//деструктор

    //TCoordMass& get_list_coord() {};//возвращает список координат, куда фигура может сдвинуться, начальные координаты берет от свего обьекта.
    //bool check_move(TCoord& coord_last) {};//возвращает true если фигура может передвинуться на переданные координаты.
    void move_to(TCoord& coord_last) {};//пердвигает фигуру на переданные координаты без проверки(просто меняет свое поле TCoord). 
};
//Класс конь
class TKnight :public TFigure {
public:
    TKnight() {};//конструктор по умолчанию
    TKnight(TKnight& tmp) {};//конструктор копирования
    ~TKnight() {};//деструктор

    //TCoordMass& get_list_coord() {};//возвращает список координат, куда фигура может сдвинуться, начальные координаты берет от свего обьекта.
    //bool check_move(TCoord& coord_last) {};//возвращает true если фигура может передвинуться на переданные координаты.
    void move_to(TCoord& coord_last) {};//пердвигает фигуру на переданные координаты без проверки(просто меняет свое поле TCoord). 
};
//класс механик игры, содержит в себе массмв фигур, и методы с обработкой механик игры
class TGame {
    TFigure_mass mass;
    short int move_count;
    TCoordMass history; //доработать, не готово
    void check_game_mehanics();
public:
    bool move(TCoord first_coord, TCoord last_coord);
    TCoord& get_possible_move(TCoord first_coord);
    TGame() :move_count(0) {}
    TGame(TGame& tmp) {
        //mass = tmp.mass; нет перегрузки = для TFigure_mass, добавть.
        move_count = tmp.move_count;
        history = tmp.history;
    }
};

//В данный момент в main код для проверки правильности работы вашей фигуры
int main()
{
    //создаем координату
    TCoord s;
    s.set_y(1);
    s.set_x(1);
    //вызывается конструктор TPawn::TPawn(short int _id, TCoord _coord, TFigure_color _color)
    TPawn t(1, s, withe);
    //меняем координату
    s.set_x(1);
    s.set_y(4);
    //проверка может ли фигура сходить на новую координату
    if (t.check_move(s)) { cout << "First test: " << "TRUE TEST, check_move return true " << endl; }
    else { cout << "First test: " << "FALSE TEST, check_move return false " << endl; }
    //вывод списка координату куда она может сходить
    TCoordMass mass_tmp = t.get_list_coord();
    //mass_tmp.print();
    cout << mass_tmp << endl;
    //std::cout << "Hello World!\n";
}