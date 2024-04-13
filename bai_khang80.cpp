#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int x;
	cout<<"nhap x:";cin>>x;
	do{
		cout<<"nhap n:"; cin >>n;
		if(n<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(n<0);
	float tong=0;
	int mau =0;
	for(int i=1;i<=n;i++){
		mau+=i;
		tong+=(pow(x,i)/mau);
	}
	cout<<"S(n):"<<tong<<endl;
	}

