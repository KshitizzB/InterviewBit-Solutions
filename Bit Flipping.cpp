int Solution::solve(int A) {
    int x = log2(A)+1;
    for(int i=0; i<x; i++) A ^= (1<<i);
    return A;
}