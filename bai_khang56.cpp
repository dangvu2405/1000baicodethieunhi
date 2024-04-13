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
	int le=0;
	if(n<10){
		if(n%2!=0){
			cout<<"toan so le"<<endl;
		}
		else{
			cout<<"toan so chan"<<endl;
		}
	}
	else{
		do{
		float i=n%10 ; 
		dem++;
		if(n%2!=0){
			le++;
		}
	}
	while (n/=10) ;
	if(dem==le){
		cout<<"chu so toan le"<<endl;
	}
	else{
		cout<<"chu so khong toan le"<<endl;
	}
}
}

