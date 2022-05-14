int Solution::solve(int A) {
    if(A==0) return 0;
    int r=1;
    while(A){
        r *= (A%10);
        A /= 10;
    }
    return r;
}