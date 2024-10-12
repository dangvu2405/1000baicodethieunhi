/* k? thu?t ğ?t lính canph*/ 
#include <bits/stdc++.h>
using namespace std;
float giatrinhonhat(float a[], int n){
	float min = a[0];
	for(int i=0; i<n; i++){
		if(min > a[i]){
			min=a[i];
		}
	}
	return min;
}
int main (){
	int n;
	cout<<"nhap gia tri "<<endl;
   	cin >> n;
	float *a= new float [n];
	 for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout<<"vi tri co gia tri nho nhat tim duoc trong manng :"<<endl;
    cout<<giatrinhonhat(a,n);
}

