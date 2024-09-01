#include <bits/stdc++.h>
using namespace std;

/*
    Bezout Theorem:- If there exists two numbers a and b such that gcd(a,b) = g. Then aX+bY = g, where X, Y are integers. If there is a situation when A number can be added any number of times with numbers a and b, then it can be simply added with their gcd to get the same number.
*/
int gcd(int a, int b) {
    if(b==0){
        return a;
    }
    return gcd(b a%b);
}

int min(int a, int b) {
    return a>b?b:a;
}


void solve(){
    
}
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        solve();
    }
}
