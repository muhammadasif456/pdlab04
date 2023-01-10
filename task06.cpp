#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);

void a();
void w();
void i();
void s();
main()
{
 system("cls");
 a();
 w();
 a();
 i();
 s();
}
 void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void a()
 {
  gotoxy(5,3);
 cout<<"            #                         "<<endl;
 gotoxy(6,4);
 cout<<"           # #                        "<<endl;
gotoxy(7,5);
 cout<<"          #   #                       "<<endl;
gotoxy(8,6);
 cout<<"         #     #                      "<<endl;
gotoxy(9,7);
 cout<<"        # ####  #                    "<<endl;
gotoxy(10,8);
 cout<<"       #         #                     "<<endl;
gotoxy(11,9);
 cout<<"       #         #                     "<<endl;
}
void w()
{
 gotoxy(12,3);
 cout<<" ###      ##        ###                "<<endl;
gotoxy(13,4);
 cout<<"  ##      ##        ##                 "<<endl;
gotoxy(14,5);
 cout<<"   ##     ##       ##                  "<<endl;
gotoxy(15,6);
 cout<<"    ################                   "<<endl;
}
void i()
{
gotoxy(16,3);
 cout<<"            ###                        "<<endl;
gotoxy(17,4);
 cout<<"            ###                        "<<endl;
gotoxy(18,5);
 cout<<"            ###                        "<<endl;
gotoxy(19,6);
 cout<<"            ###                        "<<endl;
gotoxy(20,7);
 cout<<"            ###                        "<<endl;
gotoxy(21,8);
 cout<<"            ###                        "<<endl;
gotoxy(22,9);
 cout<<"            ###                        "<<endl;
}
 void s()
{
gotoxy(23,3);
 cout<<"            #######                   "<<endl;
gotoxy(24,4);
 cout<<"          ##       #                  "<<endl;
gotoxy(25,5);
 cout<<"          ##                           "<<endl;
gotoxy(26,6);
 cout<<"           #######                     "<<endl;
gotoxy(27,7);
 cout<<"                  #                    "<<endl;
gotoxy(28,8);
 cout<<"                  #                    "<<endl;
gotoxy(29,9);
 cout<<"           #######                     "<<endl;
} 

