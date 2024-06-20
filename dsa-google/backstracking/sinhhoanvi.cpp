#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok;

void init(){
	for(int i=1; i <= n; i++) a[i]=i;
}

void generate(){
	// bat dau tu vi tri n-1 boi vi can so sanh a[i] va a[i+1]; i=n-1
	// chung nao a[i] > a[i+1] thi phai dich sang trai
	int i = n-1;
	while(i >= 1 && a[i] > a[i+1]){
		i--;
	}

	if(i == 0){
		ok=false;
	} else {
		// a[i] < a[i+1]
		// di tim so dung sau vi tri i, > a[i], va nho nhat co the
		int j = n; // bat dau tu chi so cuoi cung, bo qua cac vi tri ma a[j] < a[i]
		while(a[i] > a[j]) --j;
		// a[j]: phan tu lon hon a[i] ma nho nhat
		swap(a[i], a[j]);
		// c1:sap xep cac phan tu tu i+1 => n theo thu tu tang dan, cham hon: O(nlogn)
		// sort(a+i+1, a+n+1);
		// c2: lat nguoc toan tu i+1 => n, nhanh hon: O(n)
		reverse(a+i+1, a+n+1);
	}

}

int main(){
	n=4;
	init();
	ok=true;
	while(ok){
		for(int i =1; i <= n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		generate();
	}
	return 0;
}