int Solution::solve(int A, int B, int C) {
    long long x = 10*ceil(A/10.0);
    long long y = 10*floor(B/10.0);
    int r = (y-x)/10;
    if(B%10>=C) r++;
    if(A%10<=C && (A%10)) r++;
    return r;
}