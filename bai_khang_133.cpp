#include <bits/stdc++.h>
using namespace std;
float chonloc(float a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]<0){
			cout<<i<<endl;
		}
	}
}
int main (){
	int n;
	cout<<"nhap gia tri "<<endl;
   	cin >> n;
	float *a= new float [n];
	 for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout<<" vi tri co gia tri am :"<<endl;
	chonloc(a,n);
}
