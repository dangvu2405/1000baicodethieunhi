// so hoan hao la so tong uoc cua no bang chinh no
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;

	do{
		cout<<"nhap n";cin>>n;
		if(n<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}	
	}
	while (n<0);
	int tong = 0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			tong +=i;
		}
	}
	if(tong==n){
		cout<<n<<"la so hoan hao"<<endl;
	}
	else{
		cout<<n<<"khong la so hoan hao"<<endl;
	}
}
