#include "CChessGameLib.h"
#include <stdlib.h>
#include <iostream>

//В данный момент в main код для проверки правильности работы вашей фигуры
int main()
{
    TGame game;
    if (game.move(TCoord(4, 1), TCoord(4, 2))) { std::cout << "Good" << endl; }
    if (game.move(TCoord(5, 6), TCoord(5, 5))) { std::cout << "Good" << endl; }
    if (game.move(TCoord(6, 2), TCoord(6, 3))) { std::cout << "Good" << endl; }
    else { std::cout << "BAD" << endl; }
    if (game.move(TCoord(5, 0), TCoord(2, 3))) { std::cout << "Good" << endl; }
    if (game.move(TCoord(4, 7), TCoord(5, 6))) { std::cout << "Good" << endl; }

    if (game.checkmate()) { std::cout << "GOOD"; }
    system("pause");
}