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
	for(int i=0;i<=n;i++){
		if(i%2!=0){
			cout<<i<<" ";
		}
	}
}
