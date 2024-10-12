/* k? thu?t ð?t lính canph*/ 
#include <bits/stdc++.h>
using namespace std;
float giatriduongnhonhat(float a[], int n){
	float min = a[0];
	for(int i=0; i<n; i++){
		if(min > a[i] && a[i]> 0){
			min=a[i];
		}
	}
	if(min<0){
		return -1;
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
    cout<<"gia tri duong nho nhat  tim duoc trong manng :"<<endl;
    cout<<giatriduongnhonhat(a,n);
}

