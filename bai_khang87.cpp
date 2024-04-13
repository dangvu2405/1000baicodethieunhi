#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"nhap n:";cin>>n;
	int tong=0;
	cout<<"so nguyen duong nho nhat co cap so cong >10000 la:"<<endl;
	for(int i=1;i<=n;i++){
		tong+=i;
		if(tong >pow(10,4)){
			cout<<i<<endl;
			break;
		}
	}
	
}
