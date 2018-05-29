#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    while(a--){
        cin >> b;
        double s = 0;
        double x, y, z, p;
        while(b--){
            
            cin >> x >> y >> z;
            p = ((z*0.01)*x)+x;
            //cout << p<< endl;
            s += (x-(p-(p*(z*0.01))))*y;
            //cout << s << endl;
        }
        cout.precision(12);
        cout <<fixed <<s << endl;
    }
}
