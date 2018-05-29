#include<bits/stdc++.h>
using namespace std;

long long int v[100010], y, b;

int test(long long int x){
    long long int s = 0;
    for(int i = 0;i<b;i++){
        s+=(v[i]/x);
        if(v[i]%x != 0)s+=1;
       
       // cout << ceil(v[i]/x) << endl; 
    }
    return s;
}

long long int busca(){
    int ini = 1, meio, fim = 1000000010, resp;
    while(ini <= fim){
        meio = (ini+fim)/2;
        
        if(test(meio) <= y){
            fim = meio-1;
            resp = meio;
        }
        if(test(meio) > y)ini = meio+1;
    }
    return resp;
}

int main(){
    long long int a;
    cin >> a;
    while(a--){
        cin >> b >> y;
        for(int i = 0;i<b;i++){
            cin >> v[i];
        }
        long long int r  = busca();
         cout << r << endl;
    }
}
