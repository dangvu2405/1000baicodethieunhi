#include <bits/stdc++.h>
using namespace std;
void nhap(int n, float a[]){
	for(int i=0;i<n;i++){
	cout<<"A"<<"["<<i<<"]";cin>>a[i];
	}
}
void xuat(int n, float a[]){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cout<<" nhap so luong phan tu:";
	cin>>n;
	float a[n];
	nhap(n,a);
	xuat(n,a);
}
