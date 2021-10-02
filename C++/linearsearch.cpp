#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,x;
	cin >> n >> x;

	int a[n], p = -1;
	for(int i=0;i<n;i++){
		if(a[i] == x){
			p = i;
			break;
		}
	}

	if(p==-1){
		cout << "Unable to find " << x << endl;
	}else{
		cout << x << " is at position " << p << endl;
	}

	return 0;
}