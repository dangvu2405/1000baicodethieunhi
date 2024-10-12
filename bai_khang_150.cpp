#include <bits/stdc++.h>
using namespace std;
float soamdautien(float a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]<0){
			return a[i];
		}
	}
	return 0;
}
float soamlonnhhat(float a[], int n){
	float max = soamdautien(a,n);
	if(soamdautien == 0){
		return 0;
	}
	for(int i=0; i<n ; i++ ){
		if(max<a[i] && a[i]<0){
			max = a[i];
		}
	}
	return max;
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
	cout<<" so am lon nhhat  :"<<endl;
	cout<< soamlonnhhat(a,n);
}
