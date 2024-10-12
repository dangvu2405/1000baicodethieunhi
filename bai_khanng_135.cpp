#include <bits/stdc++.h>
using namespace std;
float giatriduongdau(float a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]>0){
			return a[i];
		}
	}
	return -1;
}
int main (){
 	int n;
	cout<<"nhap gia tri "<<endl;
   	cin >> n;
	float *a= new float [n];
	 for (int i = 0; i < n; i++) {
        cin >> a[i];
    }	
    cout<<"gia tri duong dau tien la:"<<endl;
    cout<<giatriduongdau(a,n);
}
