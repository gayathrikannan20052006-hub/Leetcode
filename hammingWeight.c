int hammingWeight(int n) {
    int c=0,r;
    while(n>0){
        r=n%2;
        n=n/2;
        if(r==1){
            c++;
        }
    }
    return c;
}
