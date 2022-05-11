vector<int> Solution::solve(vector<int> &A) {
    int n=A.size(), c=0;
    for(int i=0; i<n; i++){
        if(A[i]!=0) A[c++] = A[i];
    }
    for(int i=c; i<n; i++) A[i] = 0;
    return A;
}