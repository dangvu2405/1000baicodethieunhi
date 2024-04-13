 #include <bits/stdc++.h>
using namespace std;
int main (){
	float 	n; 
	do{
		cout<<"nhap so n:";cin>>n;	
		if(n<=0){
			cout<<"yeu cau nhap lai !"<<endl;
		}
	}
	while(n<=0); 
	float canbac2=0;
	for(float  i=2 ;i<=n;i++){
		canbac2 =sqrt(i+canbac2 ) ;
	}
	cout<< canbac2<< endl; 
}
