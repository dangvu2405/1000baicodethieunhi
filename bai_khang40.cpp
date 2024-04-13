#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int x;
	do{
	cout<<"nhap so n:";cin>>n;
	cout<<"nhap so x:";cin>>x;
	if(n<1 || x<0){
		cout<<"yeu cau nhap lai!"<<endl;
	}
}
	while (n<1||x<0);
	float giaithua=1;
	float canbac = pow(x,2)+sqrt(x);
	for(int i=3;i<=n;i++){
		canbac=sqrt(pow(x,i)+canbac);
	}
	cout<<"S("<<n<<"):"<<canbac<<endl;
}

