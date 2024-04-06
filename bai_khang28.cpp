#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;cout<<"nhap n: ";
	cin>>n;
	int i=1;
	int x=0;
	int tong=0;
	cout<<"uoc so cua "<<n<<":";
	while(i>0){
		if(i<n){
			if(n%i==0){
			cout<<i<<" ";
			tong+=i;
			x++;
			}
		i++;
		}
	}
	if(x==0){
		cout<<"khong co uoc le "<<n<<endl;
	}
	else{
		cout<<"Tong uoc nho hon chinh no "<<n<<" la:"<<tong<<endl;
	}
}

