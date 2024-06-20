#include<bits/stdc++.h>
using namespace std;

int x[100], n, ok, k;

void init(){
	// khoi tao
	for(int i = 1; i <= k; i++){
		x[i] = i;
	}
}

void generate(){
	// bat dau tu bit (thu k), kiem tra xem phan tu thu x[i] dat gia tri max hay chua
	// x[i] = n - k + i
	// th1: x[i] == n - k + i => kh the tang x[i] len duoc nua (da max roi), dich sang trai
	// th2: x[i] != n - k + i => x[i]++, tat ca cac phan tu tu i + 1 => k, se tang tu x[i] mot don vi
	
	int i = k;
	while(i >= 1 && x[i] == n - k + i){
		--i;
	}
	// th1: i van nam trong doan [1, k] nhma x[i] chua dat gia tri max
	// th2: i = 0 khi cac so sap xep theo thu tu tang dan. vd: 45678
	if(i == 0) ok = false;
	else{
		x[i]++;
		for(int j = i+1; j <= k; j++){
			x[j] = x[j-1] + 1;
		}
	}
}

int main(){
	n=6, k=4;
	init();
	ok = true;
	while(ok){
		for(int i = 1; i <= k; i++){
			cout << x[i] << " ";
		}
		cout << endl;
		generate();
	}
	return 0;
}
