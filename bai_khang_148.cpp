#include <bits/stdc++.h>
using namespace std;
int songuyento(int a[], int n){
	for(int i=n-1; i>0; i--){
		int dem =0;
		if(a[i]==1){
			return -1;
		}
		if(a[i]==2){
			return a[i];
		}
		for(int j=2; j<a[i];j++){
			if(a[i]%j==0){
				dem++;
			}
		}
		if(dem==0){
			return a[i];
		}
	}
	return -1;
}
int main (){
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
	cout<<" so nguyen to cuoi cung:"<<endl;
	cout<<songuyento(a,n);
}
