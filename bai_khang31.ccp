#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cout<<"Nhap n: "; cin>>n;
    for(int i=2;i<=n;i++){
        int dem=0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                dem++;
                break;
            }
        }
        if(dem==0) cout<<i<<" ";
    }
}