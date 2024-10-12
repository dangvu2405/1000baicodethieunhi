#include <bits/stdc++.h>
using namespace std;
float nhap(float toan,float van , float diem){
	cout<<" nhap diem toan :"; cin >> toan;
	cout<<"nhap diem van :"; cin >> van;
	diem=(toan+van)/2;
	return diem;
}
int main(){
	string ten;
	float diemtoan,diemvan;
	float diemtrungbinh;
	cout<<"nhap ten:"; cin.ignore();getline(cin,ten);
	cout<<nhap(diemtoan, diemvan,diemtrungbinh);
}
