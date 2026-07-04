class Solution {
public:
    double Solve(double x, long n){

    if(n == 0){
        return 1;
    }
    if ( n < 0) return Solve(1/x,-n);
    if( n % 2 == 0) return Solve(x * x,n/2); //even
    return x * Solve( x * x, (n-1)/2); // odd
    }



    double myPow(double x, int n) {

        return Solve(x, (long)n);

    }
};
