#include "CChessGameLib.h"

void TCoord::set_x(int _x) {
    x = _x;
}
void TCoord::set_y(int _y) {
    y = _y;
}
short int TCoord::get_x() { return x; }
short int TCoord::get_y() { return y; }
TCoord& TCoord::operator=(const TCoord& tmp) {
    x = tmp.x;
    y = tmp.y;
    return *this;
}
bool TCoord::operator==(const TCoord& tmp) const {
    return ((x == tmp.x) && (y == tmp.y));
}
bool TCoord::operator!=(const TCoord& tmp) const {
    return ((x != tmp.x) || (y != tmp.y));
}
TCoord::TCoord(short int _x, short int _y) {
    x = _x;
    y = _y;
}
ostream& operator<<(ostream& os, const TCoord& coord) {
    os << "X = " << coord.x << "Y = " << coord.y;
    return os;
}

ostream& operator<<(ostream& os, const TCoordMass& coord_mass) {
    os << endl;
    os << ORANGE << "\t\t\tOBJECT NAME = " << typeid(coord_mass).name() << RESET << endl;
    os << "coord count = " << coord_mass.count << endl;
    for (int i = 0; i < coord_mass.count; i++) {
        os << "index[" << i << "] X = " << coord_mass.mass[i].get_x() << "\tY = " << coord_mass.mass[i].get_y() << endl;
    }
    return os;
}
int TCoordMass::get_count() { return count; }
void TCoordMass::add_coord(TCoord& _tmp) { add_coord(_tmp.get_x(), _tmp.get_y()); }
void TCoordMass::print() {
    for (int i = 0; i < count; i++) {
        cout << "X: " << mass[i].get_x() << "Y: " << mass[i].get_y() << endl;
    }
}
void TCoordMass::add_coord(short int x, short int y) {
    TCoord* tmp_mass = new TCoord[count + 1];
    for (short int i = 0; i < count; i++) { tmp_mass[i] = mass[i]; }
    tmp_mass[count].set_x(x);
    tmp_mass[count].set_y(y);
    delete[] mass;
    mass = tmp_mass;
    count++;
}
TCoordMass::TCoordMass() { mass = nullptr; count = 0; }
TCoordMass::TCoordMass(TCoordMass& tmp) {
    mass = new TCoord[tmp.count];
    count = tmp.count;
    for (int i = 0; i < tmp.count; i++) {
        mass[i] = tmp.mass[i];
    }
}
TCoord TCoordMass::operator[](int i) {
    if (i >= 0 && i < count)
        return mass[i]; else throw logic_error("i - index beyond possible values");
}
TCoordMass& TCoordMass::operator=(const TCoordMass& tmp) {
    delete[]mass;
    mass = new TCoord[tmp.count];
    count = tmp.count;
    for (int i = 0; i < tmp.count; i++) {
        mass[i] = tmp.mass[i];
    }
    return *this;
}

TCoord TFigure::get_coord() { return coord; }
TFigure_type TFigure::get_figure_type() { return type; }
TFigure_color TFigure::get_figure_color() { return color; }
TFigure::TFigure() {
    id = -1;
    type = no_type;
    coord.set_x(-1);
    coord.set_y(-1);
    color = no_color;
}
TFigure::TFigure(TFigure& tmp) {
    coord = tmp.coord;
    type = tmp.type;
    id = tmp.id;
    color = tmp.color;
}
TFigure::TFigure(short int _id, TCoord _coord, TFigure_color _color) {
    id = _id;
    coord = _coord;
    color = _color;
    type = no_type;
}

TPawn::TPawn() {
    id = -1;
    type = pawn;
    color = no_color;
    coord.set_x(-1);
    coord.set_y(-1);
}
TPawn::TPawn(short int _id, TCoord _coord, TFigure_color _color) {
    type = pawn;
    id = _id;
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
void TPawn::move_to(TCoord coord_last) {
    coord.set_x(coord_last.get_x());
    coord.set_y(coord_last.get_y());
}
bool TPawn::check_move(TCoord coord_last) {
    if (color == black) {
        if ((coord.get_y() - 1 == coord_last.get_y() && (coord.get_x() == coord_last.get_x()))) { return 1; }
        else
        {
            if ((coord.get_y() == 7) && (coord.get_y() - 2 == coord_last.get_y() && (coord.get_x() == coord_last.get_x()))) return 1; else return 0;
        }
    }
    else if (color == white) {
        if ((coord.get_y() + 1 == coord_last.get_y() && (coord.get_x() == coord_last.get_x()))) { return 1; }
        else
        {
            if ((coord.get_y() == 1) && (coord.get_y() + 2 == coord_last.get_y() && (coord.get_x() == coord_last.get_x()))) return 1; else return 0;

        }
    }
    else throw logic_error("color = no_type");
}
TCoordMass& TPawn::get_list_coord() {
    TCoordMass* mass;
    mass = new TCoordMass;
    if (color == white) {
        if (coord.get_y() == 1) {
            mass->add_coord(coord.get_x(), coord.get_y() + 1);
            mass->add_coord(coord.get_x(), coord.get_y() + 2);
        }
        else {
            if (coord.get_y() == 7) {

            }
            else {
                mass->add_coord(coord.get_x(), coord.get_y() + 1);
            }
        }
    }
    else if (color == black) {
        if (coord.get_y() == 6) {
            mass->add_coord(coord.get_x(), coord.get_y() - 1);
            mass->add_coord(coord.get_x(), coord.get_y() - 2);
        }
        else {
            if (coord.get_y() == 0) {

            }
            else {
                mass->add_coord(coord.get_x(), coord.get_y() - 1);
            }
        }
    }


    //cout << "function: get_list_coord - END" << endl;
    return *mass;
}

TKing::TKing(short int _id, TCoord _coord, TFigure_color _color) {
    type = king;
    id = _id;
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
void TKing::move_to(TCoord coord_last) {
    coord.set_x(coord_last.get_x());
    coord.set_y(coord_last.get_y());
}
bool TKing::check_move(TCoord coord_last) {
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
                }
            }
        }

    }
    return *mass;
}

TQueen::TQueen(short int _id, TCoord _coord, TFigure_color _color) {
    type = queen;
    id = _id;
    coord.set_x(_coord.get_x());
    coord.set_y(_coord.get_y());
    color = _color;
}
TQueen::TQueen() {
    id = -1;
    type = queen;
    color = no_color;
    coord.set_x(-1);
    coord.set_y(-1);
}
TQueen::TQueen(TQueen& tmp) {
    type = queen;
    id = tmp.id;
    coord.set_x(tmp.coord.get_x());
    coord.set_y(tmp.coord.get_y());
    color = tmp.color;
}
TCoordMass& TQueen::get_list_coord() {
    TCoordMass* mass;
    mass = new TCoordMass;
    for (int i = 0; i < 8; i++) {
        if (coord.get_x() + i < 8 && coord.get_y() + i < 8) { mass->add_coord(coord.get_x() + i, coord.get_y() + i); }
        if (coord.get_x() + i < 8 && coord.get_y() - i > -1) { mass->add_coord(coord.get_x() + i, coord.get_y() - i); }
        if (coord.get_x() - i > -1 && coord.get_y() + i < 8) { mass->add_coord(coord.get_x() - i, coord.get_y() + i); }
        if (coord.get_x() - i > -1 && coord.get_y() - i > -1) { mass->add_coord(coord.get_x() - i, coord.get_y() - i); }
        if (coord.get_x() + i < 8) { mass->add_coord(coord.get_x() + i, coord.get_y()); }
        if (coord.get_y() + i < 8) { mass->add_coord(coord.get_x(), coord.get_y() + i); }
        if (coord.get_x() - i > -1) { mass->add_coord(coord.get_x() - i, coord.get_y()); }
        if (coord.get_y() - i > -1) { mass->add_coord(coord.get_x(), coord.get_y() - i); }
    }
    return *mass;
}
bool TQueen::check_move(TCoord coord_last) {
    if (coord_last == coord) { return false; }
    if (coord_last.get_x() == coord.get_x() || coord_last.get_y() == coord.get_y()) { return true; }
    else if (abs(coord.get_x() - coord_last.get_x()) == abs(coord.get_y() - coord_last.get_y())) {
        return true;
    }
    else { return false; }
}
void TQueen::move_to(TCoord coord_last) {
    coord.set_x(coord_last.get_x());
    coord.set_y(coord_last.get_y());
}

TRook::TRook(TRook& tmp) {
    type = rook;
    id = tmp.id;
    coord.set_x(tmp.coord.get_x());
    coord.set_y(tmp.coord.get_y());
    color = tmp.color;
}
TRook::TRook() {
    id = -1;
    type = rook;
    color = no_color;
    coord.set_x(-1);
    coord.set_y(-1);
}
TRook::TRook(short int _id, TCoord _coord, TFigure_color _color) {
    type = rook;
    id = _id;
    coord.set_x(_coord.get_x());
    coord.set_y(_coord.get_y());
    color = _color;
}
void TRook::move_to(TCoord coord_last) {
    coord.set_x(coord_last.get_x());
    coord.set_y(coord_last.get_y());
}
bool TRook::check_move(TCoord coord_last) {
    if (coord_last.get_x() == coord.get_x() && (coord_last.get_y() > -1) && (coord_last.get_y() != coord.get_y())) return true;
    if (coord_last.get_y() == coord.get_y() && (coord_last.get_x() > -1) && (coord_last.get_x() != coord.get_x())) return true;
    else return false;
};
TCoordMass& TRook::get_list_coord() {
    TCoordMass* mass = new TCoordMass;
    for (int i = coord.get_y() + 1; i <= 7; i++) {
        mass->add_coord(coord.get_x(), i);
    };
    for (int i = coord.get_y() - 1; i >= 0; i--) {
        mass->add_coord(coord.get_x(), i);
    };
    for (int i = coord.get_x() + 1; i <= 7; i++) {
        mass->add_coord(i, coord.get_y());
    };
    for (int i = coord.get_x() - 1; i >= 0; i--) {
        mass->add_coord(i, coord.get_y());
    };
    return *mass;
}

TBishop::TBishop(short int _id, TCoord _coord, TFigure_color _color) {
    type = bishop;
    id = _id;
    coord.set_x(_coord.get_x());
    coord.set_y(_coord.get_y());
    color = _color;
}
TBishop::TBishop() {
    id = -1;
    type = bishop;
    color = no_color;
    coord.set_x(-1);
    coord.set_y(-1);
}
TBishop::TBishop(TBishop& tmp) {
    type = bishop;
    id = tmp.id;
    coord.set_x(tmp.coord.get_x());
    coord.set_y(tmp.coord.get_y());
    color = tmp.color;
}
TCoordMass& TBishop::get_list_coord() {
    TCoordMass* mass;
    mass = new TCoordMass;
    for (int i = 0; i < 8; i++) {
        if (coord.get_x() + i < 8 && coord.get_y() + i < 8) { mass->add_coord(coord.get_x() + i, coord.get_y() + i); }
        if (coord.get_x() + i < 8 && coord.get_y() - i > -1) { mass->add_coord(coord.get_x() + i, coord.get_y() - i); }
        if (coord.get_x() - i > -1 && coord.get_y() + i < 8) { mass->add_coord(coord.get_x() - i, coord.get_y() + i); }
        if (coord.get_x() - i > -1 && coord.get_y() - i > -1) { mass->add_coord(coord.get_x() - i, coord.get_y() - i); }
    }
    return *mass;
}
bool TBishop::check_move(TCoord coord_last) {
    if (coord_last == coord) { return false; }
    if (abs(coord.get_x() - coord_last.get_x()) == abs(coord.get_y() - coord_last.get_y())) {
        return true;
    }
    else { return false; }
}
void TBishop::move_to(TCoord coord_last) {
    coord.set_x(coord_last.get_x());
    coord.set_y(coord_last.get_y());
}

TKnight::TKnight(TKnight& tmp) {
    type = knight;
    id = tmp.id;
    coord.set_x(tmp.coord.get_x());
    coord.set_y(tmp.coord.get_y());
    color = tmp.color;
}
TKnight::TKnight() {
    id = -1;
    type = knight;
    color = no_color;
    coord.set_x(-1);
    coord.set_y(-1);
}
TKnight::TKnight(short int _id, TCoord _coord, TFigure_color _color) {
    type = knight;
    id = _id;
    coord.set_x(_coord.get_x());
    coord.set_y(_coord.get_y());
    color = _color;
}
bool TKnight::check_move(TCoord coord_last) {
    TCoord deth_coord(-1, -1);
    if (coord_last == deth_coord) throw logic_error("figure destroyed");
    if ((coord.get_y() - 2 == coord_last.get_y() && coord.get_x() - 1 == coord_last.get_x()) && (coord.get_y() - 2 >= 0 && coord.get_x() - 1 >= 0)) return true;
    if ((coord.get_y() - 2 == coord_last.get_y() && coord.get_x() + 1 == coord_last.get_x()) && (coord.get_y() - 2 >= 0 && coord.get_x() + 1 <= 7)) return true;
    if ((coord.get_y() - 1 == coord_last.get_y() && coord.get_x() + 2 == coord_last.get_x()) && (coord.get_y() - 1 >= 0 && coord.get_x() + 2 <= 7)) return true;
    if ((coord.get_y() + 1 == coord_last.get_y() && coord.get_x() + 2 == coord_last.get_x()) && (coord.get_y() + 1 <= 7 && coord.get_x() + 2 <= 7)) return true;
    if ((coord.get_y() - 1 == coord_last.get_y() && coord.get_x() - 2 == coord_last.get_x()) && (coord.get_y() - 1 >= 0 && coord.get_x() - 2 >= 0)) return true;
    if ((coord.get_y() + 1 == coord_last.get_y() && coord.get_x() - 2 == coord_last.get_x()) && (coord.get_y() + 1 <= 7 && coord.get_x() - 2 >= 0)) return true;
    if ((coord.get_y() + 2 == coord_last.get_y() && coord.get_x() - 1 == coord_last.get_x()) && (coord.get_y() + 2 <= 7 && coord.get_x() - 1 >= 0)) return true;
    if ((coord.get_y() + 2 == coord_last.get_y() && coord.get_x() + 1 == coord_last.get_x()) && (coord.get_y() + 2 <= 7 && coord.get_x() + 1 <= 7)) return true;
    return false;
};
TCoordMass& TKnight::get_list_coord() {
    TCoordMass* mass = new TCoordMass;//перебор вариантов
    if (coord.get_y() - 2 >= 0 && coord.get_x() - 1 >= 0) { mass->add_coord(coord.get_y() - 2, coord.get_x() - 1); }
    if (coord.get_y() - 2 >= 0 && coord.get_x() + 1 <= 7) { mass->add_coord(coord.get_y() - 2, coord.get_x() + 1); }
    if (coord.get_y() - 1 >= 0 && coord.get_x() + 2 <= 7) { mass->add_coord(coord.get_y() - 1, coord.get_x() + 2); }
    if (coord.get_y() + 1 <= 7 && coord.get_x() + 2 <= 7) { mass->add_coord(coord.get_y() + 1, coord.get_x() + 2); }
    if (coord.get_y() - 1 >= 0 && coord.get_x() - 2 >= 0) { mass->add_coord(coord.get_y() - 1, coord.get_x() - 2); }
    if (coord.get_y() + 1 <= 7 && coord.get_x() - 2 >= 0) { mass->add_coord(coord.get_y() + 1, coord.get_x() - 2); }
    if (coord.get_y() + 2 <= 7 && coord.get_x() - 1 >= 0) { mass->add_coord(coord.get_y() + 2, coord.get_x() - 1); }
    if (coord.get_y() + 2 <= 7 && coord.get_x() + 1 <= 7) { mass->add_coord(coord.get_y() + 2, coord.get_x() + 1); }
    return *mass;
};
void TKnight::move_to(TCoord coord_last) {
    coord.set_x(coord_last.get_x());
    coord.set_y(coord_last.get_y());
}

TFigure_mass::~TFigure_mass() {
    delete [] mass; //если будут ошибки - удалить "[]" или одельно вызывай деструктор
};
TFigure* TFigure_mass::operator[](int i) {
    if (i >= 0 && i < count) return mass[i];
    else throw logic_error("i - index beyond possible values");
}
TFigure* TFigure_mass::operator[](TCoord coord) {
    for (int i = 0; i < count; i++) {
        if (mass[i]->get_coord() == coord) {
            return mass[i];
        }
    }
    throw logic_error("i - index beyond possible values");
}
void TFigure_mass::add_figure(TFigure* figure) {
    TFigure** tmp_mass = new TFigure * [count + 1];
    for (int i = 0; i < count; i++) {
        tmp_mass[i] = mass[i];
    }
    tmp_mass[count] = figure;
    delete[] mass;//добавить отдельный цикл для удаления
    mass = tmp_mass;
    count++;
}

TFigure_mass::TFigure_mass() {
    count = 32;
    mass = new TFigure * [count];
    TCoord coord(0, 1);
    for (short int i = 0; i < 8; i++) {
        coord.set_x(i);
        mass[i] = new TPawn(i, coord, white);
    }
    coord.set_y(0);
    coord.set_x(0);
    mass[8] = new TRook(8, coord, white);
    coord.set_x(7);
    mass[9] = new TRook(9, coord, white);
    coord.set_x(1);
    mass[10] = new TKnight(10, coord, white);
    coord.set_x(6);
    mass[11] = new TKnight(11, coord, white);
    coord.set_x(2);
    mass[12] = new TBishop(12, coord, white);
    coord.set_x(5);
    mass[13] = new TBishop(13, coord, white);
    coord.set_x(3);
    mass[14] = new TQueen(14, coord, white);
    coord.set_x(4);
    mass[15] = new TKing(15, coord, white);

    coord.set_y(6);
    coord.set_x(0);
    for (short int i = 0; i < 8; i++) {
        coord.set_x(i);
        mass[16 + i] = new TPawn(16 + i, coord, black);
    }
    coord.set_y(7);
    coord.set_x(0);
    mass[24] = new TRook(24, coord, black);
    coord.set_x(7);
    mass[25] = new TRook(25, coord, black);
    coord.set_x(1);
    mass[26] = new TKnight(26, coord, black);
    coord.set_x(6);
    mass[27] = new TKnight(27, coord, black);
    coord.set_x(2);
    mass[28] = new TBishop(28, coord, black);
    coord.set_x(5);
    mass[29] = new TBishop(29, coord, black);
    coord.set_x(3);
    mass[30] = new TQueen(30, coord, black);
    coord.set_x(4);
    mass[31] = new TKing(31, coord, black);
}
//конструктор копиррования и деструктор дописать

TMove::TMove() {
    first_coord = TCoord(-1, -1);
    last_coord = TCoord(-1, -1);
    id = -1;
    figure = nullptr;
}
TMove::TMove(TMove& tmp) {
    last_coord = tmp.last_coord;
    first_coord = tmp.first_coord;
    id = tmp.id;
    figure = tmp.figure;
}
TMove::TMove(short int _id, TCoord first, TCoord last, TFigure* _figure, TFigure* _eatten) {
    if (first != last && _id > -1 && first != TCoord(-1, -1)) {
        first_coord = first;
        last_coord = last;
        id = _id;
        figure = _figure;
        eatten = _eatten;
    }
    else throw logic_error("i - index beyond possible values");
}

short int THistory::get_count() { return count; }
TMove THistory::get_last_move() {
    if (count > 0)
        return *mass[count - 1]; else throw logic_error("mass count == 0");
}
TMove THistory::get_move(short int index) {
    if (index > -1 && index < count)
        return *mass[index]; else throw logic_error("i - index beyond possible values");
}
TMove THistory::get_move(TFigure* figure) {
    for (int i = 0; i < count; i++) {
        if (mass[i]->figure == figure) {
            return *mass[i];
        }
    }
    throw logic_error("This figure didn't moved");
}
TMove THistory::operator[](int i) {
    if (i > -1 && i < count) return *mass[i]; else throw logic_error("i - index beyond possible values");
}
void THistory::delete_last_pos() {
    count--;;
    TMove** tmp_mass = new TMove * [count];
    for (int i = 0; i < count; i++) {
        tmp_mass[i] = new TMove(mass[i]->id, mass[i]->first_coord, mass[i]->last_coord, mass[i]->figure, mass[i]->eatten);
    }
    for (short int i = 0; i < count + 1; i++) {
        mass[i]->~TMove();
    }
    delete[] mass;
    mass = tmp_mass;
}
void THistory::delete_history() {
    for (short int i = 0; i < count + 1; i++) {
        mass[i]->~TMove();
    }
    delete[] mass;
    count = 0;
}
void THistory::add_move(short int _id, TCoord first, TCoord last, TFigure* _figure, TFigure* _eatten) {
    count++;;
    TMove** tmp_mass = new TMove * [count];
    for (int i = 0; i < count - 1; i++) {
        tmp_mass[i] = new TMove(mass[i]->id, mass[i]->first_coord, mass[i]->last_coord, mass[i]->figure, mass[i]->eatten);
    }
    tmp_mass[count - 1] = new TMove(_id, first, last, _figure, _eatten);
    for (short int i = 0; i < count - 1; i++) {
        mass[i]->~TMove();
    }
    delete[] mass;
    mass = tmp_mass;
}
THistory::THistory() {
    mass = nullptr;
    count = 0;
}
THistory::THistory(THistory& tmp) {
    count = tmp.count;
    mass = new TMove * [count];
    for (int i = 0; i < count; i++) {
        mass[i] = new TMove(tmp.mass[i]->id, tmp.mass[i]->first_coord, tmp.mass[i]->last_coord, mass[i]->figure, mass[i]->eatten);
    }
}
THistory::~THistory() {
    for (short int i = 0; i < count; i++) {
        mass[i]->~TMove();
    }
    delete[] mass;
}
THistory& THistory::operator = (const THistory &tmp){
    count = tmp.count;
    mass =new TMove * [count];
    for (short int i = 0; i < count; i++) {
        mass[i] = new TMove(*tmp.mass[i]);
    }
    return *this;
}

TGame::TGame(TGame& tmp) {
    //mass = tmp.mass; нет перегрузки = для TFigure_mass, добавть.
    move_count = tmp.move_count;
    history = tmp.history;
}
TGame::TGame() {
    move_count = 1;
}
bool TGame::found_figure(TCoord coord) {
    try {
        TFigure* f = mass[coord];
        return true;
    }
    catch (...) {
        return 0;
    }
}
bool TGame::found_move(TFigure* figure) {
    try {
        history.get_move(figure);
        return 1;
    }
    catch (...) {
        return 0;
    }
}
bool TGame::move(TCoord first_coord, TCoord last_coord) {
    if (found_figure(first_coord) && 
        ((move_count % 2 == 1 && mass[first_coord]->get_figure_color() == white) || (move_count % 2 == 0 && mass[first_coord]->get_figure_color() == black))) {
        TFigure* figure = mass[first_coord];
        if (check_possibility_move(figure, last_coord)) {
            if (check_take_on_pass(figure)) {
                history.add_move(move_count, first_coord, last_coord, figure, mass[history.get_last_move().last_coord]);
                take_on_pass(figure);
                if (checkmate()) {
                    move_count += 1;
                    canceling();
                    return false;
                }
                else { move_count += 1; return true; }
            }
            else if (check_castling(figure, last_coord)) {
                castling(figure, last_coord);
                history.add_move(move_count, first_coord, last_coord, figure, NULL);
                if (checkmate()) {
                    move_count += 1;
                    canceling();
                    return false;
                }
                else { move_count += 1; return true; }
            }
            else {
                if (found_figure(last_coord)) { 
                    history.add_move(move_count, first_coord, last_coord, figure, mass[last_coord]);
                    eatten(mass[last_coord]); 
                }
                else {
                    history.add_move(move_count, first_coord, last_coord, figure, NULL);
                }
                figure->move_to(last_coord);
                if (checkmate()) {
                    move_count += 1;
                    canceling();
                    return false;
                }
                else{ move_count += 1; return true; }
            }
        }
    }
    return false;
}
void TGame::eatten(TFigure* figure) {
    figure->move_to(TCoord(-1, -1));
}
void TGame::take_on_pass(TFigure* pawn) {
    pawn->move_to(TCoord(history.get_last_move().last_coord.get_x(),
        (history.get_last_move().last_coord.get_y() + history.get_last_move().first_coord.get_x()) / 2));
    eatten(mass[history.get_last_move().last_coord]);
    
}
void TGame::castling(TFigure* figure, TCoord last_coord) {
    figure->move_to(last_coord);
    if (last_coord.get_x() == 6) {
        mass[TCoord(7, figure->get_coord().get_y())]->move_to(TCoord(5, figure->get_coord().get_y()));
    }
    if (last_coord.get_x() == 2) {
        mass[TCoord(0, figure->get_coord().get_y())]->move_to(TCoord(3, figure->get_coord().get_y()));
    }
}
void TGame::transform(TFigure_type type) {
    if(type == queen){
        TFigure* figure = new TQueen(mass.count + 1, history.get_last_move().figure->get_coord(), history.get_last_move().figure->get_figure_color());
        mass.add_figure(figure);
    }
    if (type == bishop) {
        TFigure* figure = new TBishop(mass.count + 1, history.get_last_move().figure->get_coord(), history.get_last_move().figure->get_figure_color());
        mass.add_figure(figure);
    }
    if (type == rook) {
        TFigure* figure = new TRook(mass.count + 1, history.get_last_move().figure->get_coord(), history.get_last_move().figure->get_figure_color());
        mass.add_figure(figure);
    }
    if (type == knight) {
        TFigure* figure = new TKnight(mass.count + 1, history.get_last_move().figure->get_coord(), history.get_last_move().figure->get_figure_color());
        mass.add_figure(figure);
    }
}
bool TGame::check_take_on_pass(TFigure* figure) {
    try {
        if (history.get_last_move().figure->get_figure_type() == pawn && history.get_last_move().last_coord.get_y() == figure->get_coord().get_y()
            && abs(history.get_last_move().last_coord.get_x() - figure->get_coord().get_x()) == 1 && figure->get_figure_type() == pawn) {
            return true;
        }
        return false;
    }
    catch(...){ return false; }

}
bool TGame::check_castling(TFigure* figure, TCoord last_coord) {
    if (not(checkmate()) && not(found_move(figure)) && figure->get_figure_type() == king) {
        if (last_coord.get_x() == 6 && found_figure(TCoord(7 ,figure->get_coord().get_y())) && not(found_move(mass[TCoord(7, figure->get_coord().get_y())]))) {
            if (check_possibility_move(mass[TCoord(7, figure->get_coord().get_y())], TCoord(5, figure->get_coord().get_y())) && not(found_figure(TCoord(5, figure->get_coord().get_y())))) {
                return true;
            }
        }
        if (last_coord.get_x() == 2 && found_figure(TCoord(0, figure->get_coord().get_y())) && not(found_move(mass[TCoord(0, figure->get_coord().get_y())]))) {
            if (check_possibility_move(mass[TCoord(0, figure->get_coord().get_y())], TCoord(3, figure->get_coord().get_y())) && not(found_figure(TCoord(3, figure->get_coord().get_y())))) {
                return true;
            }
        }
    }
    return false;
}
bool TGame::check_transform() {
    if (history.get_last_move().figure->get_figure_type() == pawn) {
        return (history.get_last_move().figure->get_figure_color() == black && history.get_last_move().figure->get_coord().get_y() == 0) || 
            (history.get_last_move().figure->get_figure_color() == white && history.get_last_move().figure->get_coord().get_y() == 7);
    }
    return false;
}
bool TGame::checkmate() {
    TCoord king_coord;
    int king_id;
    if (move_count % 2 == 1) {
        for (int i = 0; i < mass.count; i++) {
            if (mass[i]->get_figure_type() == king && mass[i]->get_figure_color() == white) {
                king_id = i;
                king_coord = mass[i]->get_coord();
                break;
            }
        }
        for (int i = 0; i < mass.count; i++) {
            if (mass[i]->get_figure_color() != mass[king_id]->get_figure_color() && check_possibility_move(mass[i], king_coord)) {
                return true;
            }
        }
    }
    if (move_count % 2 == 0) {
        for (int i = 0; i < mass.count; i++) {
            if (mass[i]->get_figure_type() == king && mass[i]->get_figure_color() == black) {
                king_id = i;
                king_coord = mass[i]->get_coord();
                break;
            }
        }
        for (int i = 0; i < mass.count; i++) {
            if (mass[i]->get_figure_color() != mass[king_id]->get_figure_color() && check_possibility_move(mass[i], king_coord)) {
                return true;
            }
        }
    }
    return false;
}
bool TGame::check_possibility_move_pawn(TFigure* figure, TCoord last_coord) {
    if (figure->check_move(last_coord)) {
        if (figure->get_figure_color() == white) {
            if (found_figure(last_coord)) { return false; }
            if (figure->get_coord().get_y() == 1 && last_coord.get_y() == 3) {
                TCoord tmp(last_coord);
                tmp.set_y(2);
                if (found_figure(tmp)) { return false; }
            }
            return true;
        }
        if (figure->get_figure_color() == black) {
            if (found_figure(last_coord)) { return false; }
            if (figure->get_coord().get_y() == 6 && last_coord.get_y() == 4) {
                TCoord tmp(last_coord);
                tmp.set_y(5);
                if (found_figure(tmp)) { return false; }
            }
            return true;
        }
    }
    else {
        TCoord tmp(figure->get_coord());
        if (figure->get_figure_color() == white) {
            if ((last_coord.get_x() == tmp.get_x() + 1 || last_coord.get_x() == tmp.get_x() - 1) && last_coord.get_y() == tmp.get_y() + 1) {
                if (found_figure(last_coord) && mass[last_coord]->get_figure_color() == black) { return true; }
            }
            return false;
        }
        if (figure->get_figure_color() == black) {
            if ((last_coord.get_x() == tmp.get_x() + 1 || last_coord.get_x() == tmp.get_x() - 1) && last_coord.get_y() == tmp.get_y() - 1) {
                if (found_figure(last_coord) && mass[last_coord]->get_figure_color() == white) { return true; }
            }
            return false;
        }
    }
}
bool TGame::check_possibility_move_king(TFigure* figure, TCoord last_coord) {
    if (figure->check_move(last_coord)) {
        if (found_figure(last_coord) && mass[last_coord]->get_figure_color() == figure->get_figure_color()) {
            return false;
        }
        return true;
    }
}
bool TGame::check_possibility_move_queen(TFigure* figure, TCoord last_coord) {
    if (figure->check_move(last_coord)) {
        TCoord vector(last_coord.get_x() - figure->get_coord().get_x(), last_coord.get_y() - figure->get_coord().get_y());
        if (vector.get_x() > 0 && vector.get_y() > 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() - i, last_coord.get_y() - i))) { return false; }
            }
        }
        if (vector.get_x() < 0 && vector.get_y() > 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() + i, last_coord.get_y() - i))) { return false; }
            }
        }
        if (vector.get_x() > 0 && vector.get_y() < 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() - i, last_coord.get_y() + i))) { return false; }
            }
        }
        if (vector.get_x() < 0 && vector.get_y() < 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() + i, last_coord.get_y() + i))) { return false; }
            }
        }
        if (vector.get_x() > 0 && vector.get_y() == 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() - i, last_coord.get_y()))) { return false; }
            }
        }
        if (vector.get_x() < 0 && vector.get_y() == 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() + i, last_coord.get_y()))) { return false; }
            }
        }
        if (vector.get_y() < 0 && vector.get_x() == 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x(), last_coord.get_y() + i))) { return false; }
            }
        }
        if (vector.get_y() > 0 && vector.get_x() == 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x(), last_coord.get_y() - i))) { return false; }
            }
        }
        if (not(found_figure(last_coord))) { return true; }
        if (found_figure(last_coord) && mass[last_coord]->get_figure_color() != figure->get_figure_color()) { return true; }
    }
    return false;
}
bool TGame::check_possibility_move_bishop(TFigure* figure, TCoord last_coord) {
    if (figure->check_move(last_coord)) {
        TCoord vector(last_coord.get_x() - figure->get_coord().get_x(), last_coord.get_y() - figure->get_coord().get_y());
        if (vector.get_x() > 0 && vector.get_y() > 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() - i, last_coord.get_y() - i))) { return false; }
            }
        }
        if (vector.get_x() < 0 && vector.get_y() > 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() + i, last_coord.get_y() - i))) { return false; }
            }
        }
        if (vector.get_x() > 0 && vector.get_y() < 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() - i, last_coord.get_y() + i))) { return false; }
            }
        }
        if (vector.get_x() < 0 && vector.get_y() < 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() + i, last_coord.get_y() + i))) { return false; }
            }
        }
        if (not(found_figure(last_coord))) { return true; }
        if (found_figure(last_coord) && mass[last_coord]->get_figure_color() != figure->get_figure_color()) { return true; }
    }
    return false;
}
bool TGame::check_possibility_move_rook(TFigure* figure, TCoord last_coord) {
    if (figure->check_move(last_coord)) {
        TCoord vector(last_coord.get_x() - figure->get_coord().get_x(), last_coord.get_y() - figure->get_coord().get_y());
        if (vector.get_x() > 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() - i, last_coord.get_y()))) { return false; }
            }
        }
        if (vector.get_x() < 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x() + i, last_coord.get_y()))) { return false; }
            }
        }
        if (vector.get_y() < 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x(), last_coord.get_y() + i))) { return false; }
            }
        }
        if (vector.get_y() > 0) {
            for (int i = 1; i < vector.get_x(); i++) {
                if (found_figure(TCoord(last_coord.get_x(), last_coord.get_y() - i))) { return false; }
            }
        }
        if (not(found_figure(last_coord))) { return true; }
        if (found_figure(last_coord) && mass[last_coord]->get_figure_color() != figure->get_figure_color()) { return true; }
    }
    return false;
}
bool TGame::check_possibility_move_knight(TFigure* figure, TCoord last_coord) {
    if (figure->check_move(last_coord)) {
        if (found_figure(last_coord) && mass[last_coord]->get_figure_color() != figure->get_figure_color()) { return true; }
        if (not(found_figure(last_coord))) { return true; }
    }
    return false;
}
bool TGame::check_possibility_move(TFigure* figure, TCoord last_coord) {
    if (figure->get_figure_type() == pawn) { return check_possibility_move_pawn(figure, last_coord) || check_take_on_pass(figure); }
    if (figure->get_figure_type() == king) { return check_possibility_move_king(figure, last_coord) /* || check_castling(figure, last_coord) */ ; }
    if (figure->get_figure_type() == queen) { return check_possibility_move_queen(figure, last_coord); }
    if (figure->get_figure_type() == bishop) { return check_possibility_move_bishop(figure, last_coord); }
    if (figure->get_figure_type() == rook) { return check_possibility_move_rook(figure, last_coord); }
    if (figure->get_figure_type() == knight) { return check_possibility_move_knight(figure, last_coord); }
}
void TGame::canceling() {
    history.get_last_move().figure->move_to(history.get_last_move().first_coord);
    //history.get_last_move().eatten->move_to(history.get_last_move().last_coord);
    move_count--;
    history.delete_last_pos();
}
/*bool end_game(bool exit_flag) {
    if (exit_flag) { return true; }
    //if()
}*/