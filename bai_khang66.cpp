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
		cout<<"phuong trinh co  nghiem phan bien: "<<endl;
		 x=(-b+sqrt(denta))/(2*a);		
		 if(x>0){
		cout<<"x1:"<<sqrt(x)<<endl;
		cout<<"x2:"<<-sqrt(x)<<endl;
		}
		 y=(-b-sqrt(denta))/(2*a);	
		 	if(y>0){
			cout<<"x3:"<<sqrt(y)<<endl;
		    cout<<"x4:"<<-sqrt(y)<<endl;
		}
	}
	else if (denta==0){
		cout<<"phuong trinh co  nghiem duy nhat: "<<endl;
		x=y=-b/(a*2);
		if(x>0){
		cout<<"x1:"<<sqrt(x)<<endl;
		cout<<"x2:"<<-sqrt(x)<<endl;
		}
		if(y>0){
			cout<<"x3:"<<sqrt(y)<<endl;
		    cout<<"x4:"<<-sqrt(y)<<endl;
		}
	}
	else{
		cout<<"phuong tring vo nghiem"<<endl;
	}
}
