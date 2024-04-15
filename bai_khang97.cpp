#include <bits/stdc++.h>
using namespace std;
void tamgiacvuong(int a , int b, int c){
	int x = pow(a,2)+pow(b,2);
	if(x==pow(c,2)){
		cout<<"vuong"<<endl;
	}
}
int main(){
	int a,b,c;
	do{
		cout<<"nhap gia tri canh a:"; cin>> a;
		cout<<"nhap gia tri canh b:"; cin>> b;
		cout<<"nhap gia tri canh c:"; cin>> c;
		if(a*b*c<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(a*b*c <0);
	
	if(a+b>c || c+b>a ||c+a>b){
		cout<<"tam giac ";
		if(a==b && b==c && a==c){
			cout<<"deu"<<endl;
		}
		else{
			if(a==b){
				cout<<"can";
				tamgiacvuong(a,b,c);
			}
			if(b==c){
				cout<<"can";
				tamgiacvuong(b,c,a);
			}
			if(c==a){
				cout<<"can";
				tamgiacvuong(c,a,b);
			}
		}
		tamgiacvuong(a,b,c);
		tamgiacvuong(b,c,a);
		tamgiacvuong(c,a,b);
	}
}
