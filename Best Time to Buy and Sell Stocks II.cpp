int Solution::maxProfit(const vector<int> &A) {
    int r = 0;
    for(int i=1; i<A.size(); i++){
        if(A[i]>A[i-1]) r += A[i] - A[i-1];
    }
    return r;
}