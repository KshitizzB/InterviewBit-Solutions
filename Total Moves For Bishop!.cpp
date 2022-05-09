int Solution::solve(int A, int B) {
    int r=0, x=A-1, y=B-1;
    while(x>=0 && y>=0 && x<=7 && y<=7){
        x--;
        y--;
        r++;
    }
    x = A-1;
    y = B-1;
    while(x>=0 && y>=0 && x<=7 && y<=7){
        x--;
        y++;
        r++;
    }
    x = A-1;
    y = B-1;
    while(x>=0 && y>=0 && x<=7 && y<=7){
        x++;
        y--;
        r++;
    }
    x = A-1;
    y = B-1;
    while(x>=0 && y>=0 && x<=7 && y<=7){
        x++;
        y++;
        r++;
    }
    return r-4;
}