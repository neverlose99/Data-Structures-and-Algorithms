#include <iostream>
#include <math.h>
#define pi 3.141593
using namespace std;
int main(){
    double s, v;
    double r;
    cout << "Nhap dien tich S: ";
    cin >> s;
    r=sqrt(s/(4*pi));
    v=(4.0/3)*pi*r*r*r;
    cout << "The tich V: " << v << endl;
}