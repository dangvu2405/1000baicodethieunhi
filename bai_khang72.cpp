#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	int x;
	cout<<"nhap x:";cin>>x;
	do{
		cout<<"nhap n:";cin >>n;
		if(n<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while (n<0);
	float mau=1;
	float S=0;
	for(int i=1;i<=n;i++){
		mau*=i;
		S+=float(pow(x,i)/mau)*(float)pow(-1,i);
	}
	cout<<"ket qua la:"<<S<<endl;
} 
