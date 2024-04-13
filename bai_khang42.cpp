#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	do{
	cout<<"nhap so n:";cin>>n;
		if(n<0 || k<0){
		cout<<"yeu cau nhap lai!"<<endl;
	}
	} 
	while (n<0 || k<0);
	int tong =0 ;
	for(int i=n;i<=n;i--){
		int tong =0 ;
		for(int j=1;j<=i;j++){
			tong+=j;
		}
		if(tong<n){
			cout<<i<< "la so can tim"<<endl;
			break;
		}	
		}
	}

