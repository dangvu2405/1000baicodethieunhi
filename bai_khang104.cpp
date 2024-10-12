#include <bits/stdc++.h>
using namespace std;
int main(){
	int ngay, thang ,nam;
	do{
		cout<<"nhap ngay:";cin>>ngay;
		cout<<"nhap Thang:";cin>>thang;
		cout<<"nhap nam:";cin>>nam;
	if(ngay>31 || thang >12){
		cout<<"ngay khong ton tai, yeu cau nhap lai!"<<endl;
	}
	}
	while(ngay>31 || thang >12);
	if(nam%4!=0 && nam%100==0){
		for(int i=1;i<thang;i++){
			if(i==1 ||i==3||i==5||i==7||i==8||i==10||i==12){
				ngay+=31;
			}
			else if(i==2){
				ngay+=28;
			}
			else{
				ngay+=30;
			}
		}
	}
	else{
		for(int i=1;i<thang;i++){
			if(i==1 ||i==3||i==5||i==7||i==8||i==10||i==12){
				ngay+=31;
			}
			else if(i==2){
				ngay+=29;
			}
			else{
				ngay+=30;
			}
		}
	}
	cout<<"tong so ngay doc than la:"<< ngay<<endl;
}
