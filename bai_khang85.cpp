#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
		cout<<"nhap thang trong nam :"; 
		cin>>n;
		if(n<0 &&n>12){
			cout<<"yeu cau nhap lai!"<<endl;
		}
	}
	while(n<0 &&n>12);
	switch (n){
		case (1):{
			cout<<"quy 1";
			break;
		}
			case (2):{
			cout<<"quy 1";
			break;
		}
			case (3):{
			cout<<"quy 1";
			break;
		}
			case (4):{
			cout<<"quy 2";
			break;
		}
			case (5):{
			cout<<"quy 2";
			break;
		}
			case (6):{
			cout<<"quy 2";
			break;
		}
			case (7):{
			cout<<"quy 3";
			break;
		}
			case (8):{
			cout<<"quy 3";
			break;
		}
			case (9):{
			cout<<"quy 3";
			break;
		}
			case (10):{
			cout<<"quy 4";
			break;
		}
			case (11):{
			cout<<"quy 4";
			break;
		}
			case (12):{
			cout<<"quy 4";
			break;
		}
		default:{
			break;
		}
	}
}
