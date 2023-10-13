#include <iostream>
#include <windows.h>
#include <conio.h>
#include <unistd.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();
void printtom1();
void printtom2();
void printtom3();
void printjerry();
void erasejerry();
void moveleftjerry();
void moverightjerry();
void moveupjerry();
void movedownjerry();
void conditions();
void erasetom1();
void erasetom2();
void erasetom3();
void movetom1();
void movetom3();
void movetom2();
void conditionstom();
void header();
char getCharAtxy(short int x, short int y);
int Px = 1, Py = 1;
int E1x = 10, E1y = 23;
int E2x = 125, E2y = 27;
int E3x = 29, E3y = 2;
bool l1 = true;
bool r2 = false;

    main()
{
  system("cls");
  printmaze();
  printjerry();

  while (true)
  {
    conditions();
    movetom1(), movetom2(), movetom3();
    Sleep(100);
  }
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{
  cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |                                                                                                                                  |" << endl;
  cout << "|                          |_______________________________________________________________________                                                           |" << endl;
  cout << "|                                                                                                 |                                             |             |" << endl;
  cout << "|                                                                                                 |                                             |             |" << endl;
  cout << "|                                                                                                 |                                             |             |" << endl;
  cout << "|                                                                                                 |                                             |             |" << endl;
  cout << "|                                                                                                 |_____________________________________________|             |" << endl;
  cout << "|                                                                                                                                                             |" << endl;
  cout << "|                                                                                                                                                             |" << endl;
  cout << "|                                                                                                                                                             |" << endl;
  cout << "|                                                                                                                                                             |" << endl;
  cout << "|                                                                                                                                                             |" << endl;
  cout << "|                                                                                                                                                             |" << endl;
  cout << "|                               |                                                                                                                             |" << endl;
  cout << "|                               |                                                                                                                             |" << endl;
  cout << "|                               |                                                                                                                             |" << endl;
  cout << "|                               |                                                                                                                             |" << endl;
  cout << "|                               |                                                                                                                             |" << endl;
  cout << "|                               |                                                                                                                             |" << endl;
  cout << "|                               |                                                                                                                             |" << endl;
  cout << "|_______________________________|                                                                                                                             |" << endl;
  cout << "|                                                                                                        %                                                    |" << endl;
  cout << "|                                                                                                        %                                                    |" << endl;
  cout << "|                                                                                                        %                                                    |" << endl;
  cout << "|                                                                                                        %                                                    |" << endl;
  cout << "|                                                                                                        %                                                    |" << endl;
  cout << "|                                                                                                        %                                                    |" << endl;
  cout << "|                                                                                                        %                                                    |" << endl;
  cout << "|                                                                                                        %                                                    |" << endl;
  cout << "|                                                                                                        %                                                    |" << endl;
  cout << "|                                                                        ________________________________%                                                    |" << endl;
  cout << "|                                                                       +                                                                                     |" << endl;
  cout << "|                                                                       +                                                                                     |" << endl;
  cout << "|                                                                       +                                                                                     |" << endl;
  cout << "|                                                                       +                                                                                     |" << endl;
  cout << "|                                                                       +                                                                                     |" << endl;
  cout << "|                                                                       +                                                                                     |" << endl;
  cout << "|                                                                       +                                                                                     |" << endl;
  cout << "|                                                                       +                                                                                     |" << endl;
  cout << "|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
}

void printjerry()
{
  gotoxy(Px, Py);
  cout << "<o>";
  gotoxy(Px, Py + 1);
  cout << "/'\\";
}
void erasejerry()
{
  gotoxy(Px, Py);
  cout << "   ";
  gotoxy(Px, Py + 1);
  cout << "   ";
}
void printtom1()
{
  gotoxy(E1x, E1y);
  cout << "/\\___/\\" << endl;
  gotoxy(E1x, E1y + 1);
  cout << "( o.o )" << endl;
  gotoxy(E1x, E1y + 2);
  cout << "  \\_/ " << endl;
}
void printtom2()
{
  gotoxy(E2x, E2y);
  cout << "/\\___/\\" << endl;
  gotoxy(E2x, E2y + 1);
  cout << "( o.o )" << endl;
  gotoxy(E2x, E2y + 2);
  cout << "  \\_/ " << endl;
}
void printtom3()
{
  gotoxy(E3x, E3y);
  cout << "/\\___/\\" << endl;
  gotoxy(E3x, E3y + 1);
  cout << "( o.o )" << endl;
  gotoxy(E3x, E3y + 2);
  cout << "  \\_/ " << endl;
}
void erasetom1()
{
  gotoxy(E1x, E1y);
  cout << "       " << endl;
  gotoxy(E1x, E1y + 1);
  cout << "        " << endl;
  gotoxy(E1x, E1y + 2);
  cout << "       " << endl;
}
void erasetom2()
{
  gotoxy(E2x, E2y);
  cout << "       " << endl;
  gotoxy(E2x, E2y + 1);
  cout << "        " << endl;
  gotoxy(E2x, E2y + 2);
  cout << "       " << endl;
}

void erasetom3()
{
  gotoxy(E3x, E3y);
  cout << "       " << endl;
  gotoxy(E3x, E3y + 1);
  cout << "        " << endl;
  gotoxy(E3x, E3y + 2);
  cout << "       " << endl;
}

void movetom1()
{
  erasetom1();

  if (E1x >= 80)
  {
    r2 = true;
    l1 = false;
  }
  if (E1x == 10)
  {
    l1 = true;
    r2 = false;
  }
  if (l1 == true)
  {
      E1x = E1x + 1;
  }
  if(r2 == true)
  {
      E1x = E1x - 1;
  }
    printtom1();
    int usleep(100000);
  

  printtom1();
}

void movetom2()
{
  erasetom2();
if (E2y >= 43)
  {
    r2 = true;
    l1 = false;
  }
  if (E2y == 27)
  {
    l1 = true;
    r2 = false;
  }
  if (l1 == true)
  {
      E2y = E2y + 1;
  }
  if(r2 == true)
  {
      E2y = E2y - 1;
  }
  
  printtom2();
}
void movetom3()
{
  erasetom3();
  E3y++, E3x++;

  if (E3y == 15)
  {
    E3x = 29, E3y = 2;
  }
  printtom3();
}

void conditionstom()
{
}

void moveleftjerry()
{
  if (getCharAtxy(Px - 1, Py) == ' ' && getCharAtxy(Px - 1, Py + 1) == ' ')
  {

    erasejerry();
    Px = Px - 1;
    printjerry();
  }
}
void moverightjerry()
{
  if (getCharAtxy(Px + 3, Py) == ' ' && getCharAtxy(Px + 3, Py + 1) == ' ')
  {
    erasejerry();
    Px = Px + 1;
    printjerry();
  }
}
void moveupjerry()
{
  if (getCharAtxy(Px, Py - 1) == ' ' && getCharAtxy(Px + 1, Py - 1) == ' ' && getCharAtxy(Px + 2, Py - 2) == ' ')
  {
    erasejerry();
    Py = Py - 1;
    printjerry();
  }
}

void movedownjerry()
{
  if (getCharAtxy(Px, Py + 2) == ' ' && getCharAtxy(Px + 1, Py + 2) == ' ' && getCharAtxy(Px + 2, Py + 2) == ' ')
  {

    erasejerry();
    Py = Py + 1;
    printjerry();
  }
}
void conditions()
{
  if (GetAsyncKeyState(VK_LEFT))
  {
    moveleftjerry();
  }
  if (GetAsyncKeyState(VK_RIGHT))
  {
    moverightjerry();
  }
  if (GetAsyncKeyState(VK_DOWN))
  {
    movedownjerry();
  }
  if (GetAsyncKeyState(VK_UP))
  {
    moveupjerry();
  }
}
char getCharAtxy(short int x, short int y)
{
  CHAR_INFO ci;
  COORD xy = {0, 0};
  SMALL_RECT rect = {x, y, x, y};
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}