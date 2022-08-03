#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i,j;
    int printer = n*n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout << printer << ' ';
            printer = printer - 1;
        }
        cout << endl;
        
    }
}