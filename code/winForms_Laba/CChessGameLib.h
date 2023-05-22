#pragma once
#include <iostream>
using namespace std;
//���� � ����������� ����� ������ � ������
#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define ORANGE "\033[33m"
#define BLUE "\033[34m"

//������������ ����� ������ � ��� ����.
enum TFigure_type { no_type, pawn, rook, knight, bishop, queen, king };//�����, �����, ����, ����, ��������, ������
enum TFigure_color { no_color, black, white };//���� ������
enum ELogic_error { invalid_inde };//��������� ������

//����� ���������
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


//������ ���������, ���������� � ���� ����� ��������� � ������ add_coo�� �����rd(), ���� �� ���������
//��� ���������� x,y �� ����������� ���� ������� TCoord. ������ ����������� � ���� ���, �� ����� �� ��������.
//�� ������ ����� ��� ����� ������ ������� ���������� ����� ����������
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

//����� - ����� ������ ���� �����, ����� ��� ���� ����� ������� ��� ������ � ����� �������.
class TFigure {
protected:
    short int id;//���������� ����� ������ �� ���� (�� 0 �� 31). �������� � ������������ �����������.
    TFigure_type type;//��� ������ �������� � ������������ ����������� �������.
    TCoord coord;//���������� ������, ���� ������ ������� - (-1,-1)
    TFigure_color color;//���� ������
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

//����� �����
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

//����� ������
class TKing :public TFigure {
public:
    TKing();//����������� �� ���������
    TKing(short int _id, TCoord _coord, TFigure_color _color);//�����������, ������� �� ����� ������������ � ������ TDeck
    TKing(TKing& tmp);//����������� �����������
    ~TKing() {};//����������

    TCoordMass& get_list_coord();//���������� ������ ���������, ���� ������ ����� ����������, ��������� ���������� ����� �� ����� �������.
    bool check_move(TCoord coord_last);//���������� true ���� ������ ����� ������������� �� ���������� ����������.
    void move_to(TCoord coord_last);//���������� ������ �� ���������� ���������� ��� ��������(������ ������ ���� ���� TCoord). 
};

//����� ��������
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

//����� �����
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

//����� ����
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

//����� ����
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


/*������ �����, ����� ��� ���������� ������ ���� ���������� � ������ TGame.
������ ��������� � ���� ���������� ����������, = , � ������, ������� ����������� � ������ TGame
�� ���������� ������� � ������� ������ � ������� �� ����������� � �� �������,
���� ����� �����-���� ��� ������� - ����������, � �������� ���� ��������.
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
};

//���� ���
class TMove {
    short int id;
    TCoord first_coord;
    TCoord last_coord;
    friend class THistory;
public:
    TMove();
    TMove(TMove& tmp);
    TMove(short int _id, TCoord first, TCoord last);
    ~TMove() {}
};

//������� �����
class THistory {
    TMove** mass;
    short int count;
public:
    THistory();
    THistory(THistory& tmp);
    ~THistory();
    short int get_count();
    TMove get_move(short int index);
    TMove get_last_move();
    TMove operator[](int i);
    void add_move(short int _id, TCoord first, TCoord last);
    void delete_last_pos(short int _count);
    void delete_history(short int _count);
    THistory& operator=(const THistory& tmp);
};

//����� ������� ����, �������� � ���� ������ �����, � ������ � ���������� ������� ����
class TGame {
    TFigure_mass mass;
    short int move_count;
    TCoordMass history; //����������, �� ������
public:
    TGame();
    TGame(TGame& tmp);
    void move(TCoord first_coord, TCoord last_coord);
    void eatten(TFigure* figure);
    bool check_possibility_move(TCoord fitst_coorf, TCoord last_coord);
    void castling();
    bool end_game();
};
