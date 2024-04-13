#include <bits/stdc++.h>
using namespace std;
int main (){
	float n;
	do
	{
	cout<<"nhap n:";
	cin>>n;
	if(n<=0){
		cout<<"yeu cau nhap lai !"<<endl;
	}
	}
	while (n<=0);
	if((int)sqrt(n) == sqrt(n)){
		cout<<n<<" la so chinh phuong"<<endl;
	}
	else{
		cout<<n<<" khong phai so chinh phuong"<<endl;
	}
} 
