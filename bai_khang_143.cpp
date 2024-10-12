#include <bits/stdc++.h>
using namespace std;
int changeint(float a[],int n){
	float change = a[n];
	while (change - static_cast<int>(change)!=0){
		change*=10;
	}
	return change;
}
float giatrichandau(float a[], int n){
	for(int i=0;i<n;i++){
		if(changeint(a,i)%2==0){
			return a[i];
		}
	}
}
int main(){
	int n;
	cout<<"nhap so luong gia tri:"<<endl;
	do{
		cin >> n;
		if(n<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(n<0);
	float *a= new float [n];
	for(int i=0; i<n;i++){
		cin >> a[i];
	}
	cout<<"gia tri thuc chan dau tien:"<<endl;
	cout<<giatrichandau(a,n);
}
