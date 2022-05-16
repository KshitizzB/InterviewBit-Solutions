string Solution::solve(string A) {
    for(int i=0; i<A.length(); i++) A[i] ^= 32;
    return A;
}