#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int x;
	do{
		cout<<"nhap x :"; cin>>x;
		cout<<"nhap n :";cin>>n;
		if(n<0){
			cout<<"yeu cau nhap lai n!"<<endl;
		}
		if(x<0){
			cout<<"yeu cau nhap lai x!"<<endl;
		}
	}
	while(n<0 || x<0);
	double tong =1;
	for(double i=1;i<=n;i++){
		double tichS=1;
		for(double j=1;j<=(2*i+1);j++){
			tichS*=j;
		}
		double tich =pow(x,2*i+1);
		tong+=(tich/tichS);
	}
	cout<<"S("<<n<<"):"<<tong<<endl;
}
