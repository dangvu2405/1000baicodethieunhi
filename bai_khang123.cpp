#include <bits/stdc++.h>
using namespace std;
int timvitri(int n,int a[]){
		int sonho=a[0];
	for(int i=0; i<n; i++){
		if(sonho>a[i]){
			sonho=a[i];
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]==sonho){
			cout<<"vi tri so nho nhat:"<<i<<endl;
		}
	}
	return sonho;
}
int main (){
	int n;
	cout<<" nhap so luong phan tu:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"A"<<"["<<i<<"]";cin>>a[i];
	}
	int x=timvitri(n,a);
	cout<<"so nho nhat mang:"<<x<<endl;
} 
