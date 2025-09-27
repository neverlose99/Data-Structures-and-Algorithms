#include <iostream>
#include <math.h>
#define pi 3.1415

using namespace std;

int main(){
    int x, d;
    double c, d1;
    cout << "Nhap so do x cua goc (phut): " ;
    cin >> x;
    d=x/60;
    d1= d%360;
    c = cos(d*pi/180);
    if (d1>=0 && d1<90){
        cout << "x thuoc goc vuong thu 1" << endl;
    }else if(d1>=90 && d1<180){
        cout << "x thuoc goc vuong thu 2" << endl;
    }else if(d1>=180 && d1<270){
        cout << "x thuoc goc vuong thu 3" << endl;
    }else
        cout << "x thuoc goc vuong thu 4" << endl;
    cout << "cos(x) = " << c << endl;
}