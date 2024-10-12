/* k? thu?t ð?t lính canph*/ 
#include <bits/stdc++.h>
using namespace std;
float giatrilonnhat(float a[], int n){
	float max = a[0];
	for(int i=0; i<n; i++){
		if(max < a[i]){
			max=a[i];
		}
	}
	return max;
}
int main (){
	int n;
	cout<<"nhap gia tri "<<endl;
   	cin >> n;
	float *a= new float [n];
	 for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout<<"gia tri lon nhat tim duoc trong manng :"<<endl;
    cout<<giatrilonnhat(a,n);
}

