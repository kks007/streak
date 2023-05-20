#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    int loop_the_shit(long int dvd,long int dvs){
 
            int sol = 0, flag = 0;
            
            if(dvs == 1)
                return dvd;
            if(dvs == -1)
                return -dvd;

            if (dvd <= 0){ flag++; dvd*= -1;}
            if (dvs <= 0){flag++; dvs*= -1;}

            while(dvd >= dvs){
                dvd = dvd - dvs;
                sol++;
            }

            if(flag==1)
                return sol*-1;
            return sol;


    }

    int divide(long int dividend,long int divisor) {
        if((dividend == INT_MIN) & (divisor == -1))
        { return INT_MAX; }
        else if((dividend == INT_MIN) & (divisor == 1))
        { return INT_MIN; }
        else{ 
            return loop_the_shit(dividend, divisor);
        }
    }
};






