#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	do{
		cout<<"nhap m:"; cin>>m;
		cout<<"nhap n:"; cin>>n;
		if(m<0 || n<0){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(m<0 || n<0);
	for(int i=0;i<n;i++){
		for(int j=0; j<m; j++){
			cout<<"*";
	}
	cout<<"\n";
} 
}
