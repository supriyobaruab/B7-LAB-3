#include<iostream>
using namespace std;
int main()
{
    double d1,d2,side,height;
    cout<<"enter the length of diagonal 1:";
cin>>d1;
cout<<"enter the length of diagonal 2:";
cin>>d2;
double ad=(d1*d2)/2;
cout<<"area using diagonal="<<ad<<endl;
cout<<"enter the length of a side=";
cin>>side;
cout<<"enter the length of the height=";
cin>>height;
double ash=side*height;
cout<<"area using side and height="<<ash<<endl;
    return 0;
}
