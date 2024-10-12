#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=200000;
	cout<<"mua tat ca giay 1000: "<< 200000/1000<<endl;
	cout<<"mua tat ca giay 2000: "<< 200000/2000<<endl;
	cout<<"mua tat ca giay 5000: "<< 200000/5000<<endl;
	cout<<"mua deu moi loai: "<<200000/8000<<endl;
	cout<<"mua deu moi loai giay 5000 va 2000: "<<200000/7000<<" giay 1000:"<<200000%7000/1000<<endl;
	cout<<"mua deu moi loai giay 5000 va 1000: "<<200000/6000<<" giay 2000:"<<200000%6000/2000<<endl;
	cout<<"mua deu moi loai giay 1000 va 2000: "<<200000/3000<<" giay 5000:"<<200000%3000/5000<<endl;
}
