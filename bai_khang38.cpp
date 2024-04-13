#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
		cout<<"nhap so n:";cin>>n;
		if(n<1){
			cout<<"yeu cau nap lai !"<<endl;
		}
	}
	while (n<1);
	float canbac = sqrt(1.0);
	for(int i=2;i<=n;i++ ){
		canbac= pow(i+canbac,1.0/(i+1));
	}
	cout<<"can bac:"<<canbac<<endl;
}
