char * multiply(char * num1, char * num2){
    if(num1[0] == '0' || num2[0] == '0' ){
        return "0";
    }
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int resLen = len1 + len2 + 1;
    char * res = calloc(resLen, 1);
    for(int i = len1 - 1; i >= 0 ; i--)
    {
        for(int j = len2 - 1; j >= 0 ; j--)
        {
	        int k = i + j + 1;
            char r = (num1[i] - '0') * (num2[j] - '0');
   	        res[k]     += r % 10;
	        res[k - 1] += r / 10;
	        r = res[k];
	        if( r >= 10 )
	        {
                res[k]     = r % 10;
                res[k - 1] += r / 10;
    	    }
	        k--;
        }
    }
    for(int i = 0; i < resLen - 1; i++) {
        res[i] += '0';
    }
    if( res[0] == '0' ){
         res++;
    }
    return res;
}
