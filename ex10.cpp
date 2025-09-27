#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long s, pos, t, sum;
    while (true){
        cout << "SIN (0 de thoat): " ;
        cin >> s;
        if (!s){
            break;
        }
        sum = s%10;
        s/=10;
        for (pos=0; pos<8 && s>0; s/=10, ++pos){
            t = s%10;
            if (pos%2){
                sum+=t;
            }else
                sum+=(2*t)/10+(2*t)%10;
        }
    }
    cout << "SIN " << ((pos<8||s>0||sum%10)?"khong ":"") << "hop le!" << endl;
    return 0;
}