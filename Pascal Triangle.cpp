vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> v;
    for(int i=1; i<=A; i++){
        vector<int> t;
        t.push_back(1);
        for(int j=1; j<=i-2; j++) t.push_back(v[i-2][j-1]+v[i-2][j]);
        if(i>1) t.push_back(1);
        v.push_back(t);
    }
    return v;
}
