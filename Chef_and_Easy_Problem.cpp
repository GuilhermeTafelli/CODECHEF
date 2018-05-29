#include<bits/stdc++.h>
using namespace std;


    long long int a, x, y, v[100010][32], vet[100010][32], r[32], c, b;

int main(){

   
    cin >> a >> c;
    for(int i = 0;i<a;i++){
        cin >> x;
        b = x;
        for(int j = 0;j<31;j++){
            if(b & (1 << j))v[i][j] = 1;
            else v[i][j] = 0;
        }
    }
    for(int i = 0;i<a;i++){
        for(int j = 0;j<=30;j++){
            if(i != 0)vet[i][j]+=v[i][j]+vet[i-1][j];
            else vet[i][j]+=v[i][j];
        }    
    }
    for(int i = 0;i<c;i++){
        cin >> x >> y;
         x--;
         y--;
        long long int s = 0;
        
        for(int j = 0;j<=30;j++){
            
            if(x == 0)r[j] = vet[y][j];
            else r[j] = vet[y][j]-vet[x-1][j];
        }
        
        
        int p = y-x+1;
        
        for(int j = 0;j<=30;j++){
            if(r[j] < p-r[j]){
                s+=(1 << j);
            }
        }
        cout << s << endl;
    }
    
}
