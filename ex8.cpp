#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a, b, c, delta;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    if (a==0){
        if(b==0){
            if(c==0){
                cout << "Phuong trinh co vo so nghiem" << endl;
            }else
                cout << "Phuong trinh vo nghiem" << endl;
        }else
            cout << "x1 = x2 = " << -c/b << endl;
    }else{
        delta=b*b-4*a*c;
        if(delta > 0){
            cout << "x1 = " << (-b+sqrt(delta))/(2*a) << endl;
            cout << "x2 = " << (-b-sqrt(delta))/(2*a) << endl;
        }else if(delta == 0){
            cout << "x1 = x2 = " << -b/(2*a) << endl;
        }else
            cout << "Phuong trinh vo nghiem" << endl;
    }
}