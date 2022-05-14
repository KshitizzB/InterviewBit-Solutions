int Solution::solve(string A, int B) {
    int r = 0;
    for(int i=0; i<A.length(); i+=B){
        string s = A.substr(i, B);
        int c = 0;
        for(int j=0; j<s.length(); j++){
            if(s[j]=='a') c++;
        }
        r = max(r, c);
    }
    return r;
}