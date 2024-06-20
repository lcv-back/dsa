#include<bits/stdc++.h>
using namespace std;
// sinh xau nhi phan co do dai n
int n, x[100], ok;

void init(){
	// cau hinh dau tien deu la cac bit 0
	for(int i = 1; i <= n; i++){
		x[i] = 0;
	}
}

void generate(){
	// bat dau tu bit cuoi cung trong cau hinh
	int i = n;

	// tim cau hinh tiep theo
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i; // dich sang ben trai
	}
	if(i == 0) // day la cau hinh cuoi cung
		ok = false;
	else
		// tim duoc bit dau tien = 0 tinh tu ben phai
		x[i] = 1;
}

int main(){
	n = 3;
	init();
	ok = true;
	while(ok){
		for(int i = 1; i <= n; i++){
			cout << x[i] << " ";
		}
		cout << endl;
		generate();
	}
	return 0;
}
