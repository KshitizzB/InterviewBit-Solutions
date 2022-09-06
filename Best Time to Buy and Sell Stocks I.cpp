int Solution::maxProfit(const vector<int> &A) {
    int n=A.size(), l=0, h=0, r=0;
    while(h<n){
        if(A[h]>A[l]) r = max(r, A[h]-A[l]);
        else l = h;
        h++;
    }
    return r;
}
