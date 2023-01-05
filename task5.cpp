#include <iostream>
#include <windows.h>
using namespace std;
void myName(char name);
void gotoxy(int, int);

main()
{ 
  system("cls");
  char name;
  myName(name);
  gotoxy(18,14);
}
void myName(char name)
{
  gotoxy(18,14);
  cout << "            ### ##          #######     ##########      #########   ###        ###        ######     " << endl;
  gotoxy(18,15);
  cout << "            ##    ##      ##       ##   ##                  #         ##      ##        ##      ##   " << endl;
  gotoxy(18,16);
  cout << "            ##     ##     ##       ##   ##                  #          ##    ##         ##      ##   " << endl;
  gotoxy(18,17);
  cout << "            ##   ##       ##       ##   ##                  #            ## ##          ##      ##   " << endl;
  gotoxy(18,18);
  cout << "            ## ##         ##       ##   ##########          #             ##            ##      ##   " << endl; 
  gotoxy(18,19);
  cout << "            ## ##         ## ##### ##   ##                  #            ##             ## #### ##   " << endl;
  gotoxy(18,20);
  cout << "            ##  ##        ##       ##   ##                  #           ##              ##      ##   " << endl;
  gotoxy(18,21);
  cout << "            ##   ##       ##       ##   ##                  #          ##               ##      ##   " << endl;
  gotoxy(18,22);
  cout << "            ##    ##      ##       ##   ##                  #         ##                ##      ##   " << endl;
  gotoxy(18,23);
  cout << "            ##     ##     ##       ##   ##                  #        ##                 ##      ##   " << endl;
  gotoxy(18,23);
  cout << "            ###     ###   ###     ###  ###              #########  ###                  ###    ###   " << endl; 

}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
