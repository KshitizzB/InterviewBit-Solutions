int Solution::solve(int A) {
    long long r=2;
    for(int i=2; i<=A; i++){
        r *= i;
        r %= 1000000007;
    }
    return r;
}