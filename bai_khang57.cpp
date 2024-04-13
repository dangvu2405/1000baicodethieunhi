#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
		cout<<"nhap so n:";cin>>n;
		if(n<0){
			cout<<"yeu cau nap lai !"<<endl;
		}
	}
	while(n<0);
	int dem=0;
	int chan=0;
	if(n<10){
		if(n%2==0){
			cout<<"toan chu so chan"<<endl;
		}
		else{
			cout<<"toan chu so le"<<endl;
		}
	}
	else{
		do{
		float i=n%10 ; 
		dem++;
		if(n%2==0){
			chan++;
		}
	}
	while (n/=10) ;
	if(dem==chan){
		cout<<"chu so toan chan"<<endl;
	}
	else{
		cout<<"chu so khong toan chan"<<endl;
	}
}
}

