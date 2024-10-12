#include <bits/stdc++.h>
using namespace std;
int sohoanthiendau( int a[], int n){
	int dem=0;
	for(int i=0; i<n; i++){
		int tong = 0;
		for(int j=1;j<a[i];j++){
			if(a[i]%j==0){
				tong+=j;
			}
		}
		if(tong==a[i]){
			dem++;
			return a[i];
		}
	}
	if(dem==0){
		return -1;
	}
}
int main(){
	int n;
	cout<<" nhap so phan tu :"<<endl ;
	do{
		cin>>n;
		if(n<0){
			cout<< " yeu cau nhap lai:"<<endl;
		}
	}
	while(n<0);
	int *a= new int [n];
	cout<<"nhap gia tri cua mang:" <<endl;
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	cout<< " so hoan thien dau la:"<<endl;
	cout<< sohoanthiendau(a,n);
}
