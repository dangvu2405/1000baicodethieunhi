#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
	cout<<"nhap n:"; cin>>n;
		if(n<0){
		cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(n<0);
	int tong=0;
	for(int i=1;i<=n;i++){
		tong+=pow(i,2);
	}
	cout<<"S("<<n<<")"<<tong<<endl;
}
