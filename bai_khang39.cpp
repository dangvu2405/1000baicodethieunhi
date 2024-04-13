#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
	cout<<"nhap so n:";cin>>n;
		if(n<1){
		cout<<"yeu cau nhap lai!"<<endl;
	}
	} 
	while (n<1);
	float giaithua=1;
	float canbac=0;
	for(int i=1;i<=n;i++){
		giaithua=1.0;
		for(float j=1;j<=i;j++){
			giaithua*=j;
		}
		canbac=pow(giaithua+canbac,1.0/(i+1));
	}
	cout<<"S("<<n<<"):"<<canbac<<endl;
}
