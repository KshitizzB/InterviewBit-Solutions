void Solution::setZeroes(vector<vector<int> > &A) {
    int r=A.size(), c=A[0].size();
    set<int> x, y;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(A[i][j]==0){
                x.insert(i);
                y.insert(j);
            }
        }
    }
    for(auto &i:x){
        for(int j=0; j<c; j++) A[i][j] = 0;
    }
    for(auto &i:y){
        for(int j=0; j<r; j++) A[j][i] = 0;
    }
}