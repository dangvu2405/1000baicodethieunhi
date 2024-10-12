/* k? thu?t ð?t lính canph*/ 
#include <bits/stdc++.h>
using namespace std;
float giatriduongnhonhat(float a[], int n){
	float min;
	for(int i=0; i<n; i++){
		if(a[i]>0){
		 min=a[i];
			break;	
		}
	}
	for(int i=0; i<n; i++){
		if(min > a[i] && a[i] > 0){
			min=a[i];
		}
	}
	if(min<0){
		return -1;
	}
	for(int i=0; i<n; i++){
		if(min==a[i]){
			return i;
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
    cout<<"vi tri gia tri nho nhat  tim duoc trong manng :"<<endl;
    cout<<giatriduongnhonhat(a,n);
}

