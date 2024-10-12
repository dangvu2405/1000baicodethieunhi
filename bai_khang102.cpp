#include <iostream>
using namespace std;

int main() {
    int n, x,t;
    do {
    	cout<<"nhap ngay:";cin>>t;
        cout << "Nhap thang: ";
        cin >> n;
        if (n*t <= 0 || n > 12) {
            cout << "Yeu cau nhap lai!\n";
        }
        if(t>31){
        	cout<<" Yeu cau nhap lai!"<<endl;
		}
    } while (n*t <= 0 || n > 12 || t>31);
    
    cout << "Nhap nam: ";
    cin >> x;
	int ngaysau=t+1;
    if (x % 4 != 0) {
		
	}
    else{
    	
	}
		
}

