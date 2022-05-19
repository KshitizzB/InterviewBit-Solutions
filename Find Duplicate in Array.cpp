int Solution::repeatedNumber(const vector<int> &A) {
    int i=0, j=0, k=0;
    do{
        i = A[i];
        j = A[A[j]];
    }
    while(i!=j);
    do{
        i = A[i];
        k = A[k];
    }
    while(i!=k);
    return i;
}