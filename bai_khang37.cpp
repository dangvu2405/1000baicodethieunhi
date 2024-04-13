#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; 
    do {
        cout << "Nhap so n: ";
        cin >> n;
        if (n < 2) {
            cout << "yeu cau nhap lai!" << endl;
        }
    } while (n < 2); 

    float canbac = pow (2.0,1.0 / n); 
    for (int i = 2; i <= n; i++) {
        canbac = pow((i + canbac), 1.0 /i);
    }

    cout << "Giá tri bieu thuc S(n) là: " << canbac << endl; 

    return 0;
}

