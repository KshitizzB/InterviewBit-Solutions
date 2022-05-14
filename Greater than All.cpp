int Solution::solve(vector<int> &A) {
    int m=INT_MIN, r=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]>m) r++;
        m = max(m, A[i]);
    }
    return r;
}