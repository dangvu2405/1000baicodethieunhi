#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	do{
	cout<<"nhap x:";cin>>x;
	cout<<"nhap n:"; cin>>n;
		if(n<0){
		cout<<"yeu cau nhap lai n! "<<endl;
		}
		if(x<0){
			cout<<"yeu cau nhap lai x!"<<endl;
		}
	}
	while(n<0 || x<0);
	int tong=0;
	for(int i=1;i<=n;i++){
		int tich=pow(x,i);
		tong+=tich;
	}
		cout<<"S("<<n<<"):"<<tong<<endl;
	}
