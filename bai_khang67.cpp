#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	int x;
	cout<<"nhap n:";cin >>n;
	cout<<"nhap x:";cin >>x;
	int S=0;
	for(int i=1;i<=n;i++){
		S+=pow(x,i+1)*pow(-1,i+1);
	}
	cout<<"ket qua la:"<<S<<endl;
} 
