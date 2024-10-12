#include <bits/stdc++.h>
using namespace std;
float can(float n, float x){
	return pow(x,float(1/n));
}
int main(){
	int n;
	float x;
	do{
		cout<<"Nhap x:"; cin>>x;
		cout<<"nhap n:"; cin >>n;
		if(n<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(n<0);
	float t=can(n,x);
	cout<<"dap an:"<<t<<endl;
}
