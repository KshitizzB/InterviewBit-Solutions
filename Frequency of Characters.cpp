vector<int> Solution::solve(string A) {
    map<char, int> m;
    vector<int> v;
    for(int i=0; i<A.length(); i++) m[A[i]]++;
    for(char c='a'; c<='z'; c++) v.push_back(m[c]);
    return v;
}