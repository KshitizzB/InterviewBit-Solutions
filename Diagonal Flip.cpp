vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    vector<vector<int>> v=A;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) A[j][i] = v[i][j];
    }
    return A;
}