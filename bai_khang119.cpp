#include<bits/stdc++.h>
using namespace std;
void songuyentoint n){
	int dem=0;
	for(int i=2;i<n;i++,dem=0){
		for(int j=2;j<=i;j++){
			if(i%j==0){
				dem++;
			}
		}
		if(dem==1){
			cout<<i<<" ";
		}
	}
}
int main(){
	int n;
	cout<<"nhap n:"; cin >>n;
	songuyento(n);
}
