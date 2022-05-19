vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> r(A, vector<int>(A, 0));
    int n=1, p=0, q=A;
    while(p<=A/2){
        int a = p;
        int b = p;    
        while(b<p+q){
            r[a][b] = n;
            n++;
            b++;
        }
        b--;
        a++;
        while(a<p+q){
            r[a][b] = n;
            n++;
            a++;
        }
        a--;
        b--;
        while(b>=p){
            r[a][b] = n;
            n++;
            b--;
        }
        b++;
        a--;
        while(a>p){
            r[a][b] = n;
            n++;
            a--;
        }
        p++;
        q -= 2;
    }
    return r;
}