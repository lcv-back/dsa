#include<bits/stdc++.h>
using namespace std;

char countChar(string s){
	int a[256] = {0};
	int max = 0;
	for(int i = 0; i < s.size(); i++){
		a[(int)s[i]]++;
	}
	
	int preAscii = -1;
	int size = sizeof(a)/sizeof(a[0]);
	for(int i =0; i < size; i++){
		if(a[i]==0) continue;
		else {
			if(max < a[i]){
				max = a[i];
				preAscii = i;
			} else if(max == a[i]){
				if(preAscii > i){
					preAscii = i;
				}
			}
		}
	}
	return (char)preAscii;
}

int main() {
	string s; getline(cin, s);
	char res = countChar(s);
	cout << res << endl;
}
