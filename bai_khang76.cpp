#include <bits/stdc++.h>
using namespace std;
 int main(){
 	signed int x;
 	cout<<"nhap X:";cin>>x;
 	int dem=0;
	if(x%3==0){
		while(x/=3){
			dem++;
		}
		if(x==pow(3,dem)){
		cout<<"dung"<<endl;
	}
		else{
		cout<<"sai"<<endl;
	}	
	}
	else{
		cout<<"sai"<<endl;
	}

 }
