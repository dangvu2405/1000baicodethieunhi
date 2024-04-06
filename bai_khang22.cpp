#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;cout<<"nhap n: ";
	cin>>n;
	int i=1;
	int tich=1;
	int  x=0;
	cout<<"uoc so cua "<<n<<":";
	while(i>0){
		if(n%i==0){
			cout<<i<<" ";
			tich*=i;
			x++;
		}
		i++;
	}
	if(x==0){
		cout<<"khong co uoc "<<n<<endl;
	}
	else{
		cout<<"Tich uoc cua "<<n<<" la :"<<tich<<endl;
	}
}
