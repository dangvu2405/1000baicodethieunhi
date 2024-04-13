#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
		cout<<"nhap n:"; cin >>n;
		if(n<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(n<0);
		int sophantu= log10(n); 
		int luu;
		int dem =0;
	do{
		int i =n % 10; 
		luu=n/10;
		int j=luu% 10;
		if(i<j){
			dem++;
		}
	} 
	while(n/=10);
	cout<<dem<<"    "<<sophantu<<endl;
	if(dem==sophantu){
		cout<<"so nguyen duong cac chu so tang dan tu trai qua phai"<<endl;
	}
	else{
		cout<<"sai"<<endl;
	}
}
