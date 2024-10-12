#include <bits/stdc++.h>
using namespace std;
int main(){
	int h;
	cout<<"nhap h:"; cin>>h;
	for(int i=1;i<=h;i++){
		for(int j=0; j<h-i; j++){
			cout<<" ";
		}
		for(int x=0;x<i*2-1;x++){
			cout<<"*";
		}
		cout<<"\n";
	}
} 
