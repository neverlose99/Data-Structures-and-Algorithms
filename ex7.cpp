#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    if (a==0){
        if (b==0){
            cout << "Phuong trinh co vo so nghiem" << endl;
        }else
            cout << "Phuong trinh vo nghiem" << endl;
    }else
        cout << "x = " << -b/a << endl;
}