#include<bits/stdc++.h>
using namespace std;
float amdautien(float a[],int n){
	int dem=0;
	for(int i=0; i <n; i++){
		if(a[i]<0){
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
	float *a= new float [n];
	cout<<"nhap gia tri cua mang:" <<endl;
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	cout<<"gia tri am dau tien:"<<endl;
	cout<<amdautien(a,n);
}
