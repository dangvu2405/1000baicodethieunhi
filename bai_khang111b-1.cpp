#include <bits/stdc++.h>
using namespace std;
int main(){
	int h;
	cout<<"nhap h:"; cin>>h;
	for(int i=1;i<=h;i++){
		for(int j=0; j<h-i; j++){
			cout<<" ";
		}
		for(int x=1;x<=i*2-1;x++){
			if(x==1 || x==i*2-1){
				cout<<"*";
			}
			else if(i==4){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
} 
