#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,f;
	cout << " nhap gia tri x:"; cin >> x;
	if(x<5){
		f=-2*pow(x,2)+4*x-9;
		cout<<"f(x)="<<f<<endl;
	}
	else{
		f=2*pow(x,2)+4*x+9;
		cout<<"f(x)="<<f<<endl;
	}
}
