#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
		cout<<"nhap n:"; cin >>n;
		if(n<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(n<0);
	cout<<"uoc so cua "<<n<<":"<<endl;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<i;
		}
	}
}
