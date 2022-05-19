vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> v;
    int p=0, q=A.size()-1, r=0, s=A[0].size()-1;
    while(p<=q && r<=s){
        for(int i=r; i<=s; i++) v.push_back(A[p][i]);
        p += 1;
        for(int i=p; i<=q; i++) v.push_back(A[i][s]);
        s -= 1;
        if(p<=q && r<=s){
            for(int i=s; i>=r; i--) v.push_back(A[q][i]);
            q -= 1;
            for(int i=q; i>=p; i--) v.push_back(A[i][r]);
            r += 1;
        }
    }
    return v;
}