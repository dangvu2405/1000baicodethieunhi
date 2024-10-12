#include <bits/stdc++.h>
using namespace std;
bool songuyento(int a[], int n){
	int dk=0;
	if(a[n]==1){
		return false;
	}
	for(int i=2;i<a[n];i++){
		if(a[n]%i==0){
			dk++;
		}
	}
	if(dk == 0){
		return true;
	}
	else{
		return false;
	}
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
	int dem=0;
	cout<<" so nguyen to dau tien:"<<endl;
	for(int i=0;i<n;i++){
		if(songuyento(a,i)){
			cout<<a[i];
			dem++;
			break;
		}
	}
	if(dem==0){
		return -1;
	}
}
