#include <bits/stdc++.h>
using namespace std;
int timsonguyento(int n,int a[]){
	int dem=0,dem1=0;
	for(int i=0;i<n;i++,dem=0){
		if(a[i]<100){
			for(int j=2;j<=a[i];j++){
				if(a[i]%j==0){
					dem++;
			}
		}
		if(dem==1){
			dem1++;
		}
		}
	}
	return dem1;
}
int main (){
	int n;
	cout<<" nhap so luong phan tu:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"A"<<"["<<i<<"]";cin>>a[i];
	}
	int x=timsonguyento(n,a);
	cout<<"so luong so nguyen to <100:"<<x<<endl;
}
