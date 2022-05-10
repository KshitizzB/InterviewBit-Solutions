long Solution::solve(int A, int B) {
    long r = A;
    for(int i=1; i<B; i++){
        if(r%2 == 0) r /= 2;
        else r = (3*r) + 1;
    }
    return r;
}