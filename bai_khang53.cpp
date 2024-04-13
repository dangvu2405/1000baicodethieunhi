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
	int max=0 ;
	int dem=1;
	if(n<10){
		dem=1;
	}
	else{
		do{
			float i=n%10 ; 
			if(i == max){
				dem++;
			}
			if(i>max){
				max=n%10;
		}
	}
	while (n/=10) ;
}
	cout<<"chu so lon nhat la:"<<max<<endl;
	cout<<"so luong chu so lon nhat la:"<<dem;
}

