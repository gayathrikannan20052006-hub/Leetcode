#include <limits.h>
int myAtoi(char* s) {
    int len = strlen(s);

    long int num = 0;
    int sign = 1;

    int i=0;
    while(s[i] == ' ')
        i++;
    if(s[i] == '-' || s[i] == '+'){
        if(s[i] == '-'){
            sign = -1;
        }
        i++;
    }
    for(i; i<len; i++){
        int digit = (s[i] - '0');
        if(digit>=0 && digit<=9){
            if (sign == 1 && (num > (INT_MAX - digit) / 10)) {
                return INT_MAX;
            }
            if (sign == -1 && (-num < (INT_MIN + digit) / 10)) {
                return INT_MIN;
            }
            num*=10;
            num+=digit;;
        }
        else break;
    }
    return (int)(num*sign);
}
