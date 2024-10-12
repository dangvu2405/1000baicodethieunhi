#include <bits/stdc++.h>
using namespace std;
bool songuyento(int a[], int n){
		int dem=0;
		if(a[n]==2){
			return true;
		}
		if( a[n]==1){
			return false;
		}
		for(int j=2; j<a[n]; j++){
			if(a[n]%j==0){
				dem++;
			}
		}
		if(dem==0){
			return true;
		}
		else{
			return false;
		}
}
int songuyentolonnhat(int a[], int n){
	int dem=0;
	int max;
	for(int i=0;i<n;i++){
		if(songuyento(a,i)){
			dem++;
			 max= a[i];
			break;
		}
	}
	if(dem==0){
		return 0;
	}
	for(int i=0; i<n; i++){
		if(max < a[i] && songuyento(a,i)){
			max=a[i];
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
	int *a= new int [n];
	cout<<"nhap gia tri cua mang:" <<endl;
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	cout<<" so nguyen to lon nhhat  :"<<endl;
	cout<< songuyentolonnhat(a,n);
}
