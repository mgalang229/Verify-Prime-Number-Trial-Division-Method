#include <bits/stdc++.h>

using namespace std;

bool prime = true;

bool checker(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			prime = false;
			break;
		}
	}
	return prime;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x;
	cin >> x;
	if(x == 0 || x == 1){
		cout << x << " -> neither prime nor composite";
	} else if(checker(x)){
		cout << x << " -> prime";
	} else{
		cout << x << " -> composite";
	}
	cout << "\n";
	return 0;
}
