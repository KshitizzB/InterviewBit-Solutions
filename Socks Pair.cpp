int Solution::solve(vector<int> &A) {
    int r = 0;
    map<int, int> m;
    for(int i=0; i<A.size(); i++) m[A[i]]++;
    for(auto i: m) r += i.second/2;
    return r;
}