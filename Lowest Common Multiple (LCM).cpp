long long f(long long int A, long long int B){
    if(B==0) return A;
    return f(B, A%B);
}

long Solution::solve(int A, int B) {
    return (A/f(A, B))*B;
}