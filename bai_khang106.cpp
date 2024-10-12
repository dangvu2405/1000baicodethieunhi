#include <bits/stdc++.h>
using namespace std;
void cachdoc(int x){
	switch(x){
		case 1:{
			cout<<"mot ";
			break;
		}
		case 2:{
			cout<<"hai ";
			break;
		}
		case 3:{
			cout<<"ba ";
			break;
		}
		case 4:{
			cout<<"bon ";
			break;
		}
		case 5:{
			cout<<"nam ";
			break;
		}
		case 6:{
			cout<<"sau ";
			break;
		}
		case 7:{
			cout<<"bay ";
			break;
		}
		case 8:{
			cout<<"tam ";
			break;
		}
		case 9:{
			cout<<"chin ";
			break;
		}
	}
}
int main(){
	int n; do{
		cout<<"nhap n"; cin>>n;
		if(n<100 || n>999){
		cout<<"yeu cau nhap lai !"<<endl;
	}
	}while(n<100 || n>999);
	int hang=n;
	hang/=10;
	cachdoc(hang);
	cout<<"tram ";
	hang/=10;
	cachdoc(hang);
	cout<<"linh ";
	n%=10;
	cachdoc(n);
}
