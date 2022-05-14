int Solution::solve(int A) {
    int n=A, r=0, x=A, y=0;
    while(n){
        r += 1;
        n /= 10;
    }
    while(x){
        y += pow(x%10, r);
        x /= 10;
    }
    return y==A?1:0;
}