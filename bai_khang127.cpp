#include <bits/stdc++.h>
using namespace std;
void sapxep(int n, float a[]){
	float apt;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				apt=a[i];
				a[i]=a[j];
				a[j]=apt;
			}
		}
	}
}
int main (){
	int n;
	cout<<" nhap so luong phan tu:";
	cin>>n;
	float a[n];
	for(int i=0;i<n;i++){
	cout<<"A"<<"["<<i<<"]";cin>>a[i];
	}
	cout<<"sau khi sap xep:"<<endl;
	sapxep(n,a);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
	
