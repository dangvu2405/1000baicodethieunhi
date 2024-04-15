#include <bits/stdc++.h>
using namespace std;

int main(){

	int x;
	do{
		cout<<"nhap x:"; cin >> x;
		if(x<2){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(x<2);
	int dem =0;
		for(int j=2;j<=sqrt(x);j++){
			if(x%j==0){	
			dem++;
		}
	} 
	if(dem==0){
		cout<<" la so nguyen to"<<endl;
	}
	else{
		cout<<"khong la so nguyen to"<<endl;
	}
}
