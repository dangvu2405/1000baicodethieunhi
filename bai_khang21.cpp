#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;cout<<"nhap n: ";
	cin>>n;
	int i=1;
	int tong=0;
	int x=0;
	cout<<"uoc so cua "<<n<<":";
	while(i>0){
		if(n%i==0){
			cout<<i<<" ";
			tong+=i;
			x++;
		}
		i++;
	}
	if(i==0){
		cout<<"\n khong co uoc cua"<<n<<endl;
	}
	else{
		cout<<"\ntong uoc cua "<<n<< " la : "<<tong;	
	}
}
