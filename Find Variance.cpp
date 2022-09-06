string Solution::solve(vector<int> &A) {
    float s=0, d;
    for(int i=0; i<A.size(); i++) s += A[i];
    s /= A.size();
    for(int i=0; i<A.size(); i++) d += (s-A[i])*(s-A[i]);
    string r = to_string(ceil(d/A.size()*100.0)/100.0);
    return r.erase(r.length()-4);
}
