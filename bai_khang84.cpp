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
			cout<<"thang 1";
			break;
		}
			case (2):{
			cout<<"thang 2";
			break;
		}
			case (3):{
			cout<<"thang 3";
			break;
		}
			case (4):{
			cout<<"thang 4";
			break;
		}
			case (5):{
			cout<<"thang 5";
			break;
		}
			case (6):{
			cout<<"thang 6";
			break;
		}
			case (7):{
			cout<<"thang 7";
			break;
		}
			case (8):{
			cout<<"thang 8";
			break;
		}
			case (9):{
			cout<<"thang 9";
			break;
		}
			case (10):{
			cout<<"thang 10";
			break;
		}
			case (11):{
			cout<<"thang 11";
			break;
		}
			case (12):{
			cout<<"thang 12";
			break;
		}
		default:{
			break;
		}
	}
}
