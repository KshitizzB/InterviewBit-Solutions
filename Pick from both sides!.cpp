int Solution::solve(vector<int> &A, int B) {
    int r=INT_MIN, s=0, n=A.size()-1, x=B-1;
    for(int i=0; i<B; i++) s += A[i];
    for(int i=0; i<B; i++){
        s -= A[x--];
        s += A[n--];
        r = max(r, s);
    }
    return r;
}