#include <bits/stdc++.h> 
using namespace std;
int main (){
	int n,x;
	do{
		cout<<" nhap thang :"; cin>> n;
		if(n<0 && n>12){
			cout<<"yeu cau nhap lai !"<<endl;
		}
		while (n<0); 
	cout<<"nhap nam:"; cin >> x;
	if(x %4!=0){
		switch (n){
			case(1 3 5 7 8 10 12){
				cout<<"31 ngay"<<endl;
				break;
			case(2){
				cout<<"28 ngay"<<endl;
				break;
			}
			case(4 6 9 11){
				cout<<"30 ngay"<<endl;
				break;
			}
			default{
				break;
			}
			}
	}
	}
	else{
		switch (n){
			case(1 3 5 7 8 10 12){
				cout<<"31 ngay"<<endl;
				break;
			case(2){
				cout<<"29 ngay"<<endl;
				break;
			}
			case(4 6 9 11){
				cout<<"30 ngay"<<endl;
				break;
			}
			default{
				break;
			}
	}
}
