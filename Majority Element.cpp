int Solution::majorityElement(const vector<int> &A) {
    int n=A.size(), r=floor(n/2);
    map<int, int> m;
    for(int i=0; i<n; i++) m[A[i]]++;
    for(auto i: m){
        if(i.second>r) return i.first;
    }
    return 0;
}