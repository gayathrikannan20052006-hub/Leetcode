bool isIsomorphic(char* s, char* t) {
    int i,j,a,b;
    a=strlen(s);
    b=strlen(t);
    if(a!=b){
        return false;
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<b;j++){
            if(((s[i]==s[j]) && (t[i]!=t[j]))|| ((s[i]!=s[j]) && (t[i]==t[j]))){
                return false;
                }
        }
    }
    return true;
}
