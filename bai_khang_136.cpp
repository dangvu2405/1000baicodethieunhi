#include <bits/stdc++.h>
using namespace std;
// ham chuyen float sang int : " static_cast<int>(value> " 
int chuyenthapphansangint (float a[], int i){
	float change = a[i] ;
	while(change - static_cast<int>(change) !=0 ){
		change *=10;
	}
	return change;
} 
float sochancuoicung(float a[], int n){
	for(int i=n-1;i>0;i--){
		if(chuyenthapphansangint(a,i)%2==0){
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
    cout<<"gia tri chan cuoi cung la:"<<endl;
    cout<<sochancuoicung (a,n);
}
