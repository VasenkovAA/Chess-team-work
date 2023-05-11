#include "CChessGameLib.h"

//В данный момент в main код для проверки правильности работы вашей фигуры
int main()
{
    THistory t;
    t.add_move(1,TCoord(5,2), TCoord(5, 7) );
    t.add_move(1, TCoord(5, 2), TCoord(5, 7));
    t.add_move(1, TCoord(5, 2), TCoord(5, 7));
    ////создаем координату
    //TCoord s;
    //s.set_y(0);
    //s.set_x(0);
    ////вызывается конструктор TPawn::TPawn(short int _id, TCoord _coord, TFigure_color _color)
    ////TPawn t1(1, s, white);
    //TKnight t2(1, s, white);
    ////меняем координату
    //s.set_x(1);
    //s.set_y(2);
    ////проверка может ли фигура сходить на новую координату
    //if (t2.check_move(s)) { cout << "First test: " << "TRUE TEST, check_move return true " << endl; }
    //else { cout << "First test: " << "FALSE TEST, check_move return false " << endl; }
    ////вывод списка координату куда она может сходить
    ////TCoordMass mass_tmp = t1.get_list_coord();
    ////mass_tmp.print();
    ////cout << mass_tmp << endl;
    ////std::cout << "Hello World!\n";
    ////
}