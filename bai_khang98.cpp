#include <bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
	if(b==0){
		return a;
	}
	ucln(b,a%b);
}
int bcnn(int a, int b){
	return (a*b)/ucln(a,b);
}
int main(){
	int a,b,c,d,e,f;
		cout<<"nhap a:"; cin >> a;
		cout<<"nhap b:"; cin >> b;
		cout<<"nhap c:"; cin >> c;
		cout<<"nhap d:"; cin >> d;
		cout<<"nhap e:"; cin >> e;
		cout<<"nhap f:"; cin >> f;
	cout<<"giai he :"<<endl;
	float luu1= bcnn(a,d)/a;cout<<luu1<<endl;
	float luu2= bcnn(a,d)/d;cout<<luu2<<endl;
	float y= ((luu1*c)-(luu2*f))/((luu1*b)-(luu2*e));
	float x= (c-b*y)/a;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
}
