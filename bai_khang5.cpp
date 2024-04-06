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
	double tong=0;
	for(double i=1;i<=n;i++){
		tong += (1/(2*i+1));
	}
		cout<<"S("<<n<<"):"<<tong<<endl;
	}
