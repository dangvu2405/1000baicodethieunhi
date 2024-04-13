#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	int x;
	cout<<"nhap n:";cin >>n;
	cout<<"nhap x:";cin >>x;
	int S=0;
	for(int i=1;i<=n;i++){
		S+=pow(x,2*i)*pow(-1,i);
	}
	cout<<"ket qua la:"<<S<<endl;
} 
