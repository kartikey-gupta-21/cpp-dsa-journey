//using sieve of erastothenes
using namespace std;
#include <bits/stdc++.h>
class Solution {
public:
    int countPrimes(int n) {
        //couldnt directly use for loop because that would produce TLE (5*10^6) so we use sieve of erastothenes
        vector<bool> prime(n+1,true); //made n+1 because indexing starts from 0 even though we know that prime starts from 2
        prime[0]=prime[1]=false;
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
                for(int j=2*i;j<n;j=j+i){
                    prime[j]=false;
                }
            }

        }
        return count;
    }
};