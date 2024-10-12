#include <bits/stdc++.h>
using namespace std;
int sohoanthien(int a[], int n){
	int min=-1;
	for(int i=0;i<n;i++){
		int tong =0;
		for(int j=1;j<a[i];j++){
			if(a[i]%j==0){
				tong+=j;
			}
		}
		if(tong==a[i]){
			if (min == -1 || a[i] < min) {
        		min = a[i];
      		}
		}
	}
	return min;
}
int main(){
	int n;
	cout<<"nhap so luong phan tu :"<<endl;
	do{
		cin>>n;
		if(n<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(n<0);
	int*a= new int [n];
	cout<<"nhap gia tri cua mang :"<<endl;
		for(int i=0;i<n;i++){
			cin>> a[i];
		}
	cout<<"so hoan thien nhi nhat trong mang :"<<endl;
	cout<<sohoanthien(a,n);
}
