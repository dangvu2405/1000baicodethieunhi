#include <bits/stdc++.h>
using namespace std;
void nhap(int n,float a[]){
	for(int i=0;i<n;i++){
	cout<<"A"<<"["<<i<<"]";cin>>a[i];
	}
}
void lietkeam(int n,float a[]){
	for(int i=0;i<n;i++){
		if(a[i]<0){				
		cout<<a[i]<<" vi tri :"<<i<<endl;
	}
}
}
int main(){
	int n;
	cout<<" nhap so luong phan tu:";
	cin>>n;
	float a[n];
	nhap(n,a);
	lietkeam(n,a);
}
