int Solution::solve(string A) {
    bool a=false, b=false, c=false, d=false, e=false;
    int n = A.length();
    if(n>=8 && n<=15) b = true;
    for(int i=0; i<n; i++){
        if(isdigit(A[i])) a = true;
        else if(islower(A[i])) c = true;
        else if(isupper(A[i])) d = true;
        else if(A[i]=='@' || A[i]=='#' || A[i]=='%' || A[i]=='&' || A[i]=='!' || A[i]=='$' || A[i]=='*') e = true;
    }
    return (a && b && c && d && e)?1:0;
}