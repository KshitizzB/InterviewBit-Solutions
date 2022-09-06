int Solution::solve(vector<int> &A, int B) {
    int c=0, l=0, h=A.size()-1, m;
    while(l<=h){
        m = (l+h)/2;
        if(A[m]>B) h--;
        else{
            c = m+1;
            l = c;
        }
    }
    return c;
}
