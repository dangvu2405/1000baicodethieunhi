#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;cout<<"nhap n: ";
	cin>>n;
	int i=1;
	int x=0;
	int max=1;
	cout<<"uoc so cua "<<n<<":";
	while(i<n){
			if(n%i==0&&i%2!=0){
			cout<<i<<" ";
			x++;
			}
		i++;
		}
	if(x==0){
		cout<<"khong co uoc le "<<n<<endl;
	}
	else{
		i=1;
		while(i<n){
			if(n%i==0 && i%2!=0){
				if(i>max){
					max=i;
				}
			}
			i++;
		}
		cout<<"uoc le lon nhat la:"<<max<<endl;
		}
}

