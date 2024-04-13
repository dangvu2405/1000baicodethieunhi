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
	float S=1;
	for(int i=0;i<n;i++){
		mau=1;
		for(int j=1;j<=2*i+1;j++){
			mau*=j;
		}
		S+=float(pow(x,2*i+1)/mau)*(float)pow(-1,i+1);
	}
	cout<<"ket qua la:"<<S<<endl;
} 
