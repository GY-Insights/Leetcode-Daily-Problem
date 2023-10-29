#include<bits/stdc++.h>
using namespace std;


//Approach 1

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {

        int tests = minutesToTest/minutesToDie;

        int pigs = 0;
        while(pow(tests + 1, pigs) < buckets){
            pigs++;
        }

        return pigs;
    }
};

//Approach 2
class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int tests = minutesToTest/minutesToDie;
        return ceil(log2(buckets)/log2(tests + 1));
    }
};


int main(){
    
    return 0;
}