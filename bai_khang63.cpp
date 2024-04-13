#include <bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
	if(b==0)
	{
		return a;
	}
	return ucln(b,a%b);
}
	int bcnn(int a, int b){
		return (a*b)/ucln(a,b);
	}
int main(){
	int a,b;
	cout<<"nhap a:";cin>>a;
	cout<<"nhap b:";cin>>b;
	int x= bcnn(a,b);
	cout<<"boi chung nho nhat:"<<x<<endl;
}

