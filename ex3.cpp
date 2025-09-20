#include <iostream>
#include <math.h>

using namespace std;
int main(){
    double xC, yC, xM, yM, r, d;
    cout << "Nhap toa do tam C(xC, yC)? ";
    cin >> xC >> yC;
    cout << "Nhap ban kinh R? ";
    cin >> r;
    cout << "Nhap toa do M(xM, yM)? ";
    cin >> xM >> yM;
    d = sqrt((xM-xC)*(xM-xC)+(yM-yC)*(yM-yC));
    if (d<r){
        cout << "M nam trong C()" << endl;
    }else 
        cout << "M nam ngoai C()" << endl;
}