#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i,j;
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            cout << (char)(65+(i+j-2)) << ' ';
        }
        cout << endl;
    }
}