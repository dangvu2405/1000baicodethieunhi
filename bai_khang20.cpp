#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;cout<<"nhap n: ";
	cin>>n;
	int i=1;
	cout<<"uoc so cua "<<n<<":";
	while(i>0){
		if(n%i==0){
			cout<<i<<" ";
		}
		i++;
	}
	if(i==0){
		cout<<"khong co uoc "<<n<<;
	}
}
