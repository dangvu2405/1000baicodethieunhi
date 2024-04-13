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
	int max=1;
	cout<<"chu so lon nhat cua"<<n <<"la :";
	if(n<10){
		cout<<n;
	}
	else{
		do{
			if((n%10)<max){
				max=n%10;
			}
		}
		while (n/=10);
		cout<<max;
}
}
