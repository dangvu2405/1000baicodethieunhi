#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cout<<"nhap n:";cin >>n;
	float mau=0;
	float S=0;
	for(int i=1;i<=n;i++){
		mau+=i;
		S+=float(1/mau)*(float)pow(-1,i+1);
	}
	cout<<"ket qua la:"<<S<<endl;
} 
