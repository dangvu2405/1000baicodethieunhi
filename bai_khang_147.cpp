#include <bits/stdc++.h>
using namespace std;
	float soduongcuoi(float a[], int n){
		int dem = 0;
		for(int i=n; i>0; i--){
			if(a[i]>0)
			{
				return a[i];
			}
		}
		if(dem=0){
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
	float *a= new float [n];
	cout<<"nhap gia tri cua mang:" <<endl;
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	cout<<" so duong cuoi cung la:"<<endl;
	cout<<soduongcuoi(a,n);
}
