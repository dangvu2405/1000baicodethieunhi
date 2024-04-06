#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
	cout<<"nhap n:"; cin>>n;
		if(n<0){
		cout<<"yeu cau nhap lai n! "<<endl;
		}
	}
	while(n<0);
	double tong=0;
	double tongS=0;
	for(double i=1;i<=n;i++){
		tong+=i;
		tongS+=(1/tong);
	}
		cout<<"S("<<n<<"):"<<tongS<<endl;
	}
