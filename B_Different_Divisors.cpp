#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        int d;
        cin >> d;
        
        long long p1 = 1 + d; // Start searching from 1+d
        
        // Loop indefinitely until we find the first prime
        while(true) {
            if(isPrime(p1)) {
                break; // Found it! Stop.
            }
            p1++; // Check next number
        }

        long long p2 = p1 + d; 
        while(true) {
            if(isPrime(p2)) {
                break; // Found it! Stop.
            }
            p2++; // Check next number
        }

        cout << p1 * p2 << endl;
    }
}