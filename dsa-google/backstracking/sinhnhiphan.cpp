#include<bits/stdc++.h>
using namespace std;

int n, x[100], ok;

void init(){
	for(int i=0; i<n; i++) x[i]=0;
}

void generate(){
	int i=n-1;
	while(i >= 0 && x[i]==1){
		x[i]=0;
		i--;
	}

	if(i<0) ok=false;
	else x[i]=1;
}

int main(){
	n=3;
	ok=true;
	init();

	while(ok){
		for(int i=0; i < n; i++){
			cout << x[i] << " ";
		}
		cout << endl;
		generate();
	}
}