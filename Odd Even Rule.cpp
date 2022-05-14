int Solution::solve(vector<int> &A, int B, int C) {
    int r = 0;
    for(int i=0; i<A.size(); i++){
        if(B%2==1 && A[i]%2==0) r += C;
        else if(B%2==0 && A[i]%2==1) r += C;
    }
    return r;
}