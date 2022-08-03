#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i,j;
    int printer = 1;
    for(i=1;i<=n;i++){
        printer = i;
        for(j=1;j<=i;j++){
            cout << printer << ' ';
            printer  = printer + 1;
        }
        cout << endl;
    }
}