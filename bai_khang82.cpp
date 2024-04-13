#include <bits/stdc++.h>
using namespace std;
int sosanh(int a, int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int a,b,c;
	cout<<"nhap a:";cin>>a;
	cout<<"nhap b:";cin>>b;
	cout<<"nhap c:";cin>>c;
	int x=sosanh(a,b);
	int x1=sosanh(x,c);
	cout<<"so lon nhat trong 3 so:"<<x1<<endl;
}
