#include <bits/stdc++.h>
using namespace std;
int somu(int x , int y){
	return pow(x,y);
}
int main(){
	int x ; int y;
	cout<<"nhap x:"; cin >>x;
	cout<<"nhap y:";cin >>y;
	int p=somu(x,y);
	cout<<"dap an:"<<p<<endl;
}
