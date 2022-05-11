int Solution::solve(string A, int B) {
    int r;
    if(A=="Monday") r = B;
    else if(A=="Tuesday") r = B+1;
    else if(A=="Wednesday") r = B+2;
    else if(A=="Thursday") r = B+3;
    else if(A=="Friday") r = B+4;
    else if(A=="Saturday") r = B+5;
    else r = B+6;
    return r/7;
}