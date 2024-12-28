#include<iostream>
using namespace std;
int main()
{
    double a,b,h;
    cout<<"enter the length of 1st base=";
    cin>>a;
    cout<<"enter the value of the other base=";
    cin>>b;
    cout<<"enter the length of the height=";
    cin>>h;
    double area=0.5*(a*b)*h;
    cout<<"the area for the Trapezoid="<<area;

    return 0;
}
