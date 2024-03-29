int Solution::climbStairs(int A) {
    int v[A+1] = {0};
    v[1] = 1;
    v[2] = 2;
    for(int i=3; i<=A; i++) v[i] = v[i-1] + v[i-2];
    return v[A];
}