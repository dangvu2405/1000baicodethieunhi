#include <bits/stdc++.h>
using namespace std;
int main(){
	int h;
	cout<<"nhap h:"; cin>>h;
	for(int i=1;i<=h;i++){
		for(int x=1;x<=i;x++){
			if(x==1 || x==i){
			cout<<"*";	
			}
			else if(i==h)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
} 
