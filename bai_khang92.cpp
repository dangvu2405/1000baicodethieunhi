#include <bits/stdc++.h>
using namespace std;
int ucnn(int a , int b){
	if(b==0){
		return a;
	}
	ucnn(b,a%b);
}
int main(){
	int a,b;
	int x;
	do{
		cout<<"nhap a:"; cin>>a;
		cout<<"nhap b:"; cin >>b;
		if(a<0 || b<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(a<0 || b<0);
	x=ucnn(a,b);
	cout<<" uoc chung lon nhat:"<<x<<endl;
} 
