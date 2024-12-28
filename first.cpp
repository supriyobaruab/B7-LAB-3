#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,d;
    float s;
    float area;
    cout <<"Input the value of first side :";
    cin >>a;
    cout <<"Input the value of second side :";
    cin >>b;
    cout <<"Input the value of third side :";
    cin >>c;

    s = (a+b+c)/2;

    d = s*((s-a)*(s-b)*(s-c));

    area = sqrt(d);

    cout <<"The area of a triangle :" <<area;

    return 0;

}