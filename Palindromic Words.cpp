int Solution::solve(string A) {
    int r=0, i=0, n=A.length();
    while(i<n){
        string p, q;
        while(i<n && A[i]!=' ') p += A[i++];
        q = p;
        reverse(q.begin(), q.end());
        if(p==q) r++;
        p = "";
        i++;
    }
    return r;
}