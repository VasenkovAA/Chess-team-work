#pragma once
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
enum TFigure_type { no_type, pawn, rook, knight, bishop, queen, king };//пешка, ладья, конь, слон, королева, король
enum TFigure_color { no_color, black, white };//цвет фигуры
enum ELogic_error { invalid_inde };//Возможные ошибки

//Класс координат
class TCoord {
private:
    short int x;
    short int y;
public:
    void set_x(int _x);
    void set_y(int _y);
    short int get_x();
    short int get_y();
    TCoord& operator=(const TCoord& tmp);
    bool operator==(const TCoord& tmp) const;
    bool operator!=(const TCoord& tmp) const;
    TCoord(short int _x, short int _y);
    TCoord() :x(-1), y(-1) {};
    friend ostream& operator<<(ostream& os, const TCoord& coord);
};


//массив координат, координату в него можно добавлять с помощю add_cooия новойrd(), кула вы передаете
//или координаты x,y по отдельности либо обьктом TCoord. Сейчас функционала у него нет, но потом он появится.
//на данном этапе вам нужна только функции добавления новой координаты
class TCoordMass {
private:
    short int count;
    TCoord* mass;
public:
    int get_count();
    void add_coord(TCoord& _tmp);
    void add_coord(short int x, short int y);
    void print();
    TCoordMass();
    TCoordMass(TCoordMass& tmp);
    ~TCoordMass() { delete[] mass; }
    TCoord operator[](int i);
    TCoordMass& operator=(const TCoordMass& tmp);
    friend ostream& operator<<(ostream& os, const TCoordMass& coord_mass);
};

//класс - общий предок всех фигур, нужен для того чтобы хранить все фигуры в одном массиве.
class TFigure {
protected:
    short int id;//Уникальный номер фигуры на поле (от 0 до 31). Задается в конструкторе наследников.
    TFigure_type type;//Тип фигуры задается в конструкторе наследующих классов.
    TCoord coord;//координата фигуры, если фигура съедена - (-1,-1)
    TFigure_color color;//цвет фигуры
public:
    TCoord get_coord();
    TFigure_type get_figure_type();
    TFigure_color get_figure_color();
private:
    virtual TCoordMass& get_list_coord() = 0;
    virtual bool check_move(TCoord coord_last) = 0;
    virtual void move_to(TCoord coord_last) = 0;
public:
    TFigure();
    TFigure(TFigure& tmp);
    TFigure(short int _id, TCoord _coord, TFigure_color _color);
    ~TFigure() {}
    friend class TGame;
};

//Класс пешка
class TPawn :public TFigure {
public:
    TPawn();
    TPawn(short int _id, TCoord _coord, TFigure_color _color);
    TPawn(TPawn& tmp);
    ~TPawn() {}

    TCoordMass& get_list_coord();
    bool check_move(TCoord coord_last);
    void move_to(TCoord coord_last);
};

//Класс король
class TKing :public TFigure {
public:
    TKing();//конструктор по умолчанию
    TKing(short int _id, TCoord _coord, TFigure_color _color);//конструктор, которым бы будем пользоваться в классе TDeck
    TKing(TKing& tmp);//конструктор копирования
    ~TKing() {};//деструктор

    TCoordMass& get_list_coord();//возвращает список координат, куда фигура может сдвинуться, начальные координаты берет от свего обьекта.
    bool check_move(TCoord coord_last);//возвращает true если фигура может передвинуться на переданные координаты.
    void move_to(TCoord coord_last);//пердвигает фигуру на переданные координаты без проверки(просто меняет свое поле TCoord). 
};

//Класс королева
class TQueen :public TFigure {
public:
    TQueen(short int _id, TCoord _coord, TFigure_color _color);
    TQueen();
    TQueen(TQueen& tmp);
    ~TQueen() {}
    TCoordMass& get_list_coord();
    bool check_move(TCoord coord_last);
    void move_to(TCoord coord_last);
};

//Класс ладья
class TRook :public TFigure {
public:
    TRook();
    TRook(TRook& tmp);
    TRook(short int _id, TCoord _coord, TFigure_color _color);
    ~TRook() {}
    TCoordMass& get_list_coord();
    bool check_move(TCoord coord_last);
    void move_to(TCoord coord_last);
};

//Класс слон
class TBishop :public TFigure {
public:
    TBishop(short int _id, TCoord _coord, TFigure_color _color);
    TBishop();
    TBishop(TBishop& tmp);
    ~TBishop() {}
    TCoordMass& get_list_coord();
    bool check_move(TCoord coord_last);
    void move_to(TCoord coord_last);
};

//Класс конь
class TKnight :public TFigure {
public:
    TKnight(short int _id, TCoord _coord, TFigure_color _color);
    TKnight();
    TKnight(TKnight& tmp);
    ~TKnight() {}

    TCoordMass& get_list_coord();
    bool check_move(TCoord coord_last);
    void move_to(TCoord coord_last);
};


/*Массив фигур, нужен для корректной работы всех механизмов в классе TGame.
Должен содержать в себе перегрузки индексации, = , и другие, которые понадобятся в классе TGame
Он организует быстрый и удобный доступ к фигурам по координатам и по индексу,
если нужны какие-либо еще функции - добавляйте, я расписал лишь основные.
*/
class TFigure_mass {
    TFigure** mass;
    short int count;
public:
    TFigure* operator[](int i);
    TFigure* operator[](TCoord coord);
    void add_figure(TFigure* figure);
    TFigure_mass();
    ~TFigure_mass();
    friend class TGame;
};

//один ход
class TMove {
    short int id;
    TCoord first_coord;
    TCoord last_coord;
    TFigure* figure;
    TFigure* eatten;
    friend class THistory;
    friend class TGame;
public:
    TMove();
    TMove(TMove& tmp);
    TMove(short int _id, TCoord first, TCoord last, TFigure* _figure, TFigure* eatten);
    ~TMove() {}
};

//история ходов
class THistory {
    TMove** mass;
    short int count;
public:
    THistory();
    THistory(THistory& tmp);
    ~THistory();
    short int get_count();
    TMove get_move(short int index);
    TMove get_move(TFigure* figure);
    TMove get_last_move();
    TMove operator[](int i);
    void add_move(short int _id, TCoord first, TCoord last, TFigure* figure, TFigure* _eatten);
    void delete_last_pos();
    void delete_history();
    THistory& operator=(const THistory& tmp);
};

//класс механик игры, содержит в себе массмв фигур, и методы с обработкой механик игры
class TGame {
    TFigure_mass mass;
    short int move_count;
    THistory history; //доработать, не готово
public:
    TGame();
    TGame(TGame& tmp);
    bool found_figure(TCoord coord);
    bool found_move(TFigure* figure);
    bool move(TCoord first_coord, TCoord last_coord);
    void eatten(TFigure* figure);
    bool check_possibility_move(TFigure* figure, TCoord last_coord);
    bool check_possibility_move_pawn(TFigure* figure, TCoord last_coord);
    bool check_possibility_move_king(TFigure* figure, TCoord last_coord);
    bool check_possibility_move_queen(TFigure* figure, TCoord last_coord);
    bool check_possibility_move_bishop(TFigure* figure, TCoord last_coord);
    bool check_possibility_move_rook(TFigure* figure, TCoord last_coord);
    bool check_possibility_move_knight(TFigure* figure, TCoord last_coord);
    bool check_take_on_pass(TFigure* pawn);
    void take_on_pass(TFigure* pawn);
    bool check_castling(TFigure* king, TCoord last_coord);
    void castling(TFigure* king, TCoord last_coord);
    bool check_transform();
    void transform(TFigure_type type);
    bool checkmate();
    void canceling();
    bool end_game(bool exit_flag);
};
