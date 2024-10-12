#include <bits/stdc++.h>
using namespace std;
int tong(int n, int x){
	int tongall=0;
	for(int i=1;i<=n;i++){
		tongall+=pow(x,i);
	}
	return tongall;
}
int main(){
	int x,n;
	cout<<"nhap x";cin>>x;
	cout<<"nhap n:"; cin >>n;
	cout<<tong(n,x);
}
