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
	int ngaysau=ngay+1;
	if(nam % 4!=0 && nam %100==0){
		if(thang==1 ||thang==3||thang==5 ||thang==7 ||thang==8 ||thang==10||thang==12){
			if(ngaysau>31){
				if(thang==12){
					thang=1;ngay=1;
					cout<<ngay<<"/"<<thang <<"/"<<nam+1<<endl;
				}
				else{
					ngay=1;
					cout<<ngay<<"/"<<thang+1 <<"/"<<nam<<endl;
				}
			}
			else{
				cout<<ngaysau<<"/"<<thang <<"/"<<nam<<endl;
			}
		}
		else if(thang==2){
			if(ngaysau>28){
				ngay=1;
				cout<<ngay<<"/"<<thang+1 <<"/"<<nam<<endl;
			}
			else{
				cout<<ngaysau<<"/"<<thang <<"/"<<nam<<endl;
			}
		}
		else{
			if(ngaysau>30){
				ngay=1;
				cout<<ngay<<"/"<<thang+1 <<"/"<<nam<<endl;
			}
			else{
				cout<<ngaysau<<"/"<<thang <<"/"<<nam<<endl;
			}
		}
	}
	else{
		if(thang==1 ||thang==3||thang==5 ||thang==7 ||thang==8 ||thang==10||thang==12){
			if(ngaysau>31){
				if(thang==12){
					thang=1;ngay=1;
					cout<<ngay<<"/"<<thang <<"/"<<nam+1<<endl;
				}
				else{
					ngay=1;
					cout<<ngay<<"/"<<thang+1 <<"/"<<nam<<endl;
				}
			}
			else{
				cout<<ngaysau<<"/"<<thang <<"/"<<nam<<endl;
			}
		}
		else if(thang==2){
			if(ngaysau>29){
				ngay=1;
				cout<<ngay<<"/"<<thang+1 <<"/"<<nam<<endl;
			}
			else{
				cout<<ngaysau<<"/"<<thang <<"/"<<nam<<endl;
			}
		}
		else{
			if(ngaysau>30){
				ngay=1;
				cout<<ngay<<"/"<<thang+1 <<"/"<<nam<<endl;
			}
			else{
				cout<<ngaysau<<"/"<<thang <<"/"<<nam<<endl;
			}
		}
	}
}

