#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
		cout<<"nhap n:"; cin>>n;
	if(n<10||n>99){
		cout<<"yeu cau nhap lai!"<<endl;
	}	
	}while(n<10||n>99);
	int hangchuc=n/10;
	int hangdonvi=n%10;
	switch(hangchuc){
		case 1:{
			cout<<"muoi";
			break;
		}
		case 2:{
			cout<<"hai";
			break;
		}
		case 3:{
			cout<<"ba";
			break;
		}
		case 4:{
			cout<<"bon";
			break;
		}
		case 5:{
			cout<<"nam";
			break;
		}
		case 6:{
			cout<<"sau";
			break;
		}
		case 7:{
			cout<<"bay";
			break;
		}
		case 8:{
			cout<<"tam";
			break;
		}
		case 9:{
			cout<<"chin";
			break;
		}
	}
	if(hangchuc!=1){
		cout<<" muoi ";
	}
		switch(hangdonvi){
		case 0:{
			if(hangchuc==1){
			break;
			}
			cout<<"chuc";
			break;
		}
		case 1:{
			cout<<"mot";
			break;
		}
		case 2:{
			cout<<"hai";
			break;
		}
		case 3:{
			cout<<"ba";
			break;
		}
		case 4:{
			cout<<"bon";
			break;
		}
		case 5:{
			cout<<"nam";
			break;
		}
		case 6:{
			cout<<"sau";
			break;
		}
		case 7:{
			cout<<"bay";
			break;
		}
		case 8:{
			cout<<"tam";
			break;
		}
		case 9:{
			cout<<"chin";
			break;
		}
	}
}
