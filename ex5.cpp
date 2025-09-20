#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double xA, yA, xB, yB, xC, yC, xM, yM, s1, s2, s3, s4;
    cout << "A(xA, yA)? ";
    cin >> xA >> yA;
    cout << "B(xB, yB)? ";
    cin >> xB >> yB;
    cout << "C(xC, yC)? ";
    cin >> xC >> yC;
    cout << "M(xM, yM)? ";
    cin >> xM >> yM;
    s1=1.0/2*fabs(xA*yB-xB*yA+xB*yC-xC*yB+xC*yA-xA*yC);
    s2=1.0/2*fabs(xA*yB-xB*yA+xB*yM-xM*yB+xM*yA-xA*yM);
    s3=1.0/2*fabs(xB*yC-xC*yB+xC*yM-xM*yC+xM*yB-xB*yM);
    s4=1.0/2*fabs(xA*yC-xC*yA+xC*yM-xM*yC+xM*yA-xA*yM);
    if (s2==0||s3==0||s4==0){
        cout << "M nam tren canh tam giac ABC" << endl;
    }else if (s2+s3+s4==s1){
        cout << "M nam trong tam giac ABC" << endl;
    }else
        cout << "M nam ngoai tam giac ABC" << endl;
}
