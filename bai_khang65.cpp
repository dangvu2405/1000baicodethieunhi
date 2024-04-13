#include <bits/stdc++.h>
using namespace std;
int main(){
		int a,b,c;
	cout<<"a:";cin>>a;
	cout<<"b:";cin>>b;
	cout<<"c:";cin>>c;
	cout<<"giai phuong trinh:"<<endl;
	int denta=pow(b,2)-4*a*c;
	float x;
	float y;
	if(denta>0){
		cout<<"phuong trinh co 2 nghiem phan bien: "<<endl;
		 x=(-b+sqrt(denta))/(2*a);cout<<"x1:"<<x<<endl;
		 y=(-b-sqrt(denta))/(2*a);cout<<"x2:"<<y<<endl;
	}
	else if (denta==0){
		cout<<"phuong trinh co 1 nghiem duy nhat: "<<endl;
		x=y=-b/(a*2);
		cout<<"x1:"<<x<<endl;
		cout<<"x2:"<<y<<endl;
	}
	else{
		cout<<"phuong tring vo nghiem"<<endl;
	}
}
