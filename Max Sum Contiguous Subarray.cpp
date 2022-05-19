int Solution::maxSubArray(const vector<int> &A) {
    int r=INT_MIN, c=0;
    for(int i=0; i<A.size(); i++){
        c += A[i];
        r = max(r, c);
        if(c<0) c = 0;
    }
    return r;
}