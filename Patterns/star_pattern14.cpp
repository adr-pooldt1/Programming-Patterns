#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i,j;
    int printer = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << (char)(65+printer) << ' ';
            printer+=1;
        }
        cout << endl;
    }
}