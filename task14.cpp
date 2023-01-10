#include<iostream>
using namespace std;
void printmenu();
void agree();
void compare();
main()
{
 system("cls");
 printmenu();
 agree();
 compare();
}
 void printmenu()
 {
 cout<<"*****************************************************************************************"<<endl;
 cout<<"*                         UET ADMISSION MANAGEMENT SYSTEM                               *"<<endl;
 cout<<"*                                                                                       *"<<endl;
 cout<<"*                                                                                       *"<<endl;
 cout<<"*  ADMISSION   ECAT     MERIT   CAMPUS        BSPROGRAM     PHD     ABOUT US            *"<<endl;
 cout<<"*                                                                                       *"<<endl;
 cout<<"*****************************************************************************************"<<endl;
}
 void agree()
 {
 string name;
 int matric;
 int inter;
 int ecat;
 int wmatric;
 int winter;
 int wecat;
 int aggre;
 cout<<"enter your name"<<endl;
 cin>>name;
 cout<<"enter your matric marks"<<endl;
 cin>>matric;
 cout<<"enter your inter marks"<<endl;
 cin>>inter;
 cout<<"enter your ecat marks"<<endl;
 cin>>ecat;
 wmatric=matric*30/11000;
 winter=inter*30/550;
 wecat=ecat*40/400;
 aggre=wmatric+winter+wecat;
 cout<<"your aggregate is:"<<aggre<<"%"<<endl;
}
 void compare()
{
 string name1;
 string name2;
 int ecat1;
 int ecat2;
 cout<<"enter the name of student 1"<<endl;
 cin>>name1;
 cout<<"enter the ecat marks of student 1"<<endl;
 cin>>ecat1;
 cout<<"enter the name of student 2"<<endl;
 cin>>name2;
 cout<<"enter your ecat marks"<<endl;
 cin>>ecat2;
 if(ecat1>ecat2)
 {
 cout<<"student 1 has greater number in ecat than stundent 2"<<endl;
 }
 if(ecat1<ecat2)
 {
 cout<<"stuedent 2 has greater number in ecat than  student 2"<<endl;
 }
}