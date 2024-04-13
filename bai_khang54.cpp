#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	do{
		cout<<"nhap so n:";cin>>n;
		if(n<0){
			cout<<"yeu cau nap lai !"<<endl;
		}
	}
	while(n<0);
	int min=0 ;
	int dem=0;
	if(n<10){
		dem=1;
	}
	else{
		do{
			float i=n%10 ; 
			if(i == min ){
				dem++;
			}
			if(i<min ){
				min=n%10;
		}
	}
	while (n/=10) ;
}
	cout<<"chu so lon nhat la:"<<min <<endl;
	cout<<"so luong chu so nho nhat la:"<<dem;
}

