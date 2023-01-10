#include<iostream>
using namespace std;
void flower();
main()
{
 system("cls");
 flower();
}
 void flower()
{
 float red;
 float white;
 float tulip;
 float total;
 float discount;
 float payableamount;
 cout<<"enter the number of red rose in dollar"<<endl;
 cin>>red;
 cout<<"enter the number of white flowers in dollar"<<endl;
 cin>>white;
 cout<<"enter the number of tulip flowers in dollars"<<endl;
 cin>>tulip;
 total=red*2+white*4.10+tulip*2.50;
 if(total>200)
 {
 discount=total*20/100;
 payableamount=total-discount;
 cout<<"total payable amount of flowers is..."<<payableamount<<endl;
 }
 if(total<200)
 {
 cout<<"your total payable amount is...."<<total;
 }
}