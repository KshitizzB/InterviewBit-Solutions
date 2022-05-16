int Solution::solve(vector<string> &A) {
    int a[26] = {0};
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[i].length(); j++)  a[A[i][j]-97]++;
    }
    for(int i=0; i<26; i++){
        if(a[i]==0) return 0;
    }
    return 1;
}