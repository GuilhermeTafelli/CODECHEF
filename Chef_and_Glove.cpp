#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int a, v2[100000], v1[100000], x;
    cin >> a;
    while(a--){
        bool b, f;
        cin >> x;
        for(long long int i = 0;i<x;i++)cin >> v1[i];
        for(long long int i = 0;i<x;i++)cin >> v2[i];
        
        for(long long int i = 0;i<x;i++){
            if(v1[i] <= v2[i])f = true;
            else{
                f = false;
                break;
            }
        }
        long long int j = 0;
        for(long long int i = x-1;i>=0;i--){
            
            if(v1[i] <= v2[j])b = true;
            else{
                b = false;
                break;
            }
            j++;
        }

        if(b and f)cout << "both" << endl;
        else if(b)cout << "back" << endl;
        else if(f)cout << "front" << endl;
        else cout << "none" << endl;  
    
    }
}
