#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int  n;
    do{
        cout<<"nhap so n: ";
        cin>>n;
        if(n<0){
            cout<<"yeu cau nhap lai!"<<endl;
        }
    } while(n<0);
    
    float dem=0;
    int  luu=n;
    int luu1=n;
    int songhichdao = 0 ;
    if(n<10){
        cout<<"khong phai chu so doi xung"<<endl;
    } else {
		do{
			float i =luu % 10;
			dem++;
		}
		while(luu/=10);
        do{
            float chuso=luu1 % 10;
            dem--; 
            songhichdao+=(chuso*pow(10,dem));
        } while(luu1/=10);
        if(songhichdao==n){
        	cout<<"la so doi xung"<<endl;
		} 
		else{
			cout<<"khong la so doi xung"<<endl;
		}
	}

}

