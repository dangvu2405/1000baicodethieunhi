#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cout<<" nhap so luong phan tu:";
	cin>>n;
	float a[n];
	for(int i=0;i<n;i++){
		cout<<"A"<<"["<<i<<"]";cin>>a[i];
	}
	float solon=a[0];
	for(int i=0; i<n; i++){
		if(solon<a[i]){
			solon=a[i];
		}
	}
	cout<<"so lon nhat mang:"<<solon<<endl;
} 
