#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cout << "nhap n";
	cin>>n;
	int dem =0;
	for(int i=2;i<=n;i++){
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
			  dem++;	
			}
		}
	}
	if(dem==1){
		cout<<"la so nguyen to"<<endl;
	}
	else{
		cout<<"khong la so nguyen to"<<endl;
	}
} 
