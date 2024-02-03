#include <bits/stdc++.h>
using namespace std;

typedef struct rena{
    string nome;
    int p, i;
    double a;
}rena;

bool func(rena a, rena b){
    if(a.p!=b.p)return a.p>b.p;
    if(a.i!=b.i)return a.i<b.i;
    if(a.a!=b.a)return a.a<b.a;
    return a.nome<b.nome;
}

int main(){
    int n;
    cin>>n;
    int casos=0;
    while(n--){
        int r, rp;
        casos++;
        cin>>r>>rp;
        rena v[r];
        for(int i=0; i<r; i++){
            cin>>v[i].nome>>v[i].p>>v[i].i>>v[i].a;
        }
        sort(v,v+r,func);
        printf("CENARIO {%d}\n", casos);
        for(int i=0; i<rp; i++){
            cout<<i+1<<" - "<<v[i].nome<<endl;
        }
    }
}