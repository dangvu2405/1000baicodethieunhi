#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"nhap so n:";cin>>n;
	if(n<1){
		cout<<"yeu cau nhap lai!"<<endl;
	}
	while (n<1);
	float ps=1.0/(1.0+1.0);
	for(int i=1;i<=n;i++){
	
		ps=(1.0/ps);
	}
	cout<<"S("<<n<<"):"<<ps<<endl;
}
