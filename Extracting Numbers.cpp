long Solution::solve(string A) {
    long r = 0;
    string t;
    for(char c: A) {
        if(isdigit(c)) t += c;
        else{
            r += atoi(t.c_str());
            t = "";
        }
    }
    return r + atoi(t.c_str());
}