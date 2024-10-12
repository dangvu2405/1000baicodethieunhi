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
	for(int i=1;i<=n;i++){
		for(int j=1; j<=m; j++){
			if(j==1 || j==m){
			cout<<"*";	
			}
			else if(i==1){
				cout<<"*";
			}
			else if(i==n){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
	}
	cout<<"\n";
} 
}
