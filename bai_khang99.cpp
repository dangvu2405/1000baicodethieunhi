#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c;
	cout<<"nhap a:";cin >>a;
	cout<<"nhap b:";cin >>b;
	cout<<"nhap c:";cin >>c;
	if(a<b && a<c){
		cout<<a<<endl;
			if(b<c){
				cout<<b<<endl;
				cout<<c<<endl;
			}
			else{
				cout<<c<<endl;
				cout<<b<<endl;
			}
	}
	if(b<a && b<c){
		cout<<b<<endl;
			if(a<c){
				cout<<a<<endl;
				cout<<c<<endl;
			}
			else{
				cout<<c<<endl;
				cout<<a<<endl;
			}
	}
	if(c<b && c<a){
		cout<<c<<endl;
			if(b<a){
				cout<<b<<endl;
				cout<<a<<endl;
			}
			else{
				cout<<a<<endl;
				cout<<b<<endl;
			}
	}
}
