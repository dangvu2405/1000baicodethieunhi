#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; 
    do {
        cout << "Nhap so n: ";
        cin >> n;
        if (n < 1) {
            cout << "yeu cau nhap lai!" << endl;
        }
    } while (n < 1); 

    float canbac2 = sqrt(1.0); 
    float giaithua = 1;

    for (int i = 2; i <= n; i++) {
        giaithua = 1;
        for (int j = 1; j <=i; j++) {
            giaithua *= j;
        }
        canbac2 = sqrt(giaithua + canbac2);
    }

    cout << "Giá tri bieu thuc S(n) là: " << canbac2 << endl; 

    return 0;
}

