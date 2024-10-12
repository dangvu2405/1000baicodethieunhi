#include <bits/stdc++.h>
using namespace std;
int tolduoc(int a[], int x){
	int tong=0;
	for(int i=1; i<a[x];i++)	{
		if(a[x]%i==0){
			tong += i;
		}
	}
	return tong;
}
int sohoanhaocuoi(int a[], int n){
	for(int i=n;i>0;i--){
		if(a[i] - tolduoc(a,i)==0){
			return a[i];
		} 
	}
	return -1;
}
int main (){
 	int n;
	cout<<"nhap gia tri "<<endl;
   	cin >> n;
	int *a= new int [n];
	 for (int i = 0; i < n; i++) {
        cin >> a[i];
    }	
    cout<<"so hoan hao cuoi cung la:"<<endl;
    cout<<sohoanhaocuoi(a,n);
}
