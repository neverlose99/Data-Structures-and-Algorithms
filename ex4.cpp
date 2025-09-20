#include <iostream>
#include <math.h>

using namespace std;
int main(){
    double a, b, c, s, p;
    cout << "Nhap 3 canh cua tam giac: ";
    cin >> a >> b >> c;
    if (a+b>c && b+c>a && a+c>b){
        if (a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){
            cout << "Tam giac vuong" << endl;
        }
        if (a==b || b==c || c==a){
            cout << "Tam giac can" << endl;
        }
    }else
        cout << "Khong hop le" << endl;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "Dien tich S = " << s << endl;
}