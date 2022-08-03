#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i,j;
    char s = (char)(65+(n-i));
    for(i=1;i<=n;i++){
        char s = (char)(65+(n-i));
        for(j=1;j<=i;j++){
            cout << s << ' ';
            s = s + 1;
        }
        cout << endl;
    }
}