#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"nhap n:";cin>>n;
	int tong=0;
	for(int i=1;i<=n;i++){
		tong+=pow(i,3);
	}
	cout<<"S(n)"<<tong<<endl;
}
