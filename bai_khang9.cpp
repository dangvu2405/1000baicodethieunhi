#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	do{
		cout<<"nhap x:";cin>>x;	
		if(x<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(x<0);
	int tich=1;
	for(int i=1;i<=x;i++){
		tich*=i;
	}
	cout<<"S("<<x<<"):"<<tich<<endl;
}
