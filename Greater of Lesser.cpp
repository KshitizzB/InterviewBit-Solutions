int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int x=A.size()-1, y=B.size()-1, p=0, q=0;
    for(int i=0; i<=max(x, y); i++){
        if(i<=x && i<=y){
            if(A[i]>C) p++;
            if(B[i]<C) q++;
        }
        else if(i<=x && A[i]>C) p++;
        else if(i<=y && B[i]<C) q++;
    }
    return max(p, q);
}