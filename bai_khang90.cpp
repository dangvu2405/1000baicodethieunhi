#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cout<<"nhap n:";cin>>n;
	cout<<"nhap m"; cin>>m;
	int tong=0;
	cout<<" t?ng c�c gi� tr? l? nguy�n duong nh? hon N:"<<endl;
	for(int i=1;i<=m;i++){
			tong+=i;
	}
	if(tong<n){
		cout<<"dung";
	}
	else{
		cout<<"sai";
	}
}
