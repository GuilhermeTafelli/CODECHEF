#include<bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;
    long long int a, x, y;
    cin >> a;
    while(a--){
        
        v.clear();
        
        cin >> x;
        for(int i = 0;i<x;i++){
            cin >> y;
            v.push_back(y);
        }
        sort(v.begin(), v.end());
        int l = -1, r = 0;
        for(int i = 0;i<v.size();i++){
            if(v[i] == l)r++;
            l = v[i];
        }
        cout << r << endl;
    }
}
