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
	cout<<"so nghich dao  la :";
		do{
			cout<<n%10;
		}
		while (n/=10);
}
