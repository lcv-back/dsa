#include<bits/stdc++.h>
using namespace std;

int n, k, a[105], ok;

void init(){
    for(int i=1; i<=k ;i++) a[i]=i;
}

void generate(){
    int i=k;
    while(i >= 1 && a[i] == n-k+i) --i;
    if(i==0) ok=false;
    else{
        a[i]++;
        for(int j=i+1; j <= k; j++) a[j]=a[j-1]+1;
    }
}

int main(){
    n=6;
    k=4;
    ok=true;
    init();

    while(ok){
        for(int i=1; i<=k; i++) cout << a[i] << " ";
        cout << endl;
        generate();
    }

    return 0;
}
