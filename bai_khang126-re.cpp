#include <bits/stdc++.h>
using namespace std;
float tongam(int n, float a[]){
	float tong=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			tong+=a[i];			
		}
	}
	return tong;
}
int main (){
	int n;
	cout<<" nhap so luong phan tu:";
	cin>>n;
	float a[n];
	for(int i=0;i<n;i++){
	cout<<"A"<<"["<<i<<"]";cin>>a[i];
	}
	float x=tongam(n,a);
	cout<<"tong cac so am trong mang:"<<x<<endl;
}
	
