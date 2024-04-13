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
	int min=1;
	cout<<"chu so nho nhat la :";
	if(n<10){
		cout<<n;
	}
	else{
		do{
			if((n%10)<min){
				min=n%10;
			}
		}
		while (n/=10);
		cout<<min;
}
}
