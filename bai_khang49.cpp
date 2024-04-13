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
	while(n/10!=0){
		n=n/10;
		}
		cout<<"chu so dau tien la :"<<n<<endl;
}
