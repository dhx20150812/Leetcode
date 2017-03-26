bool isAlpha(char s){
    return (s<='z' && s>='a') || (s<='Z' && s>='A') || (s<='9' && s>='0');
}
bool isPalindrome(char* s) {
    int len = strlen(s),i=0,j=len-1;
    while(i<j){
        while(i<j && !isAlpha(s[i])){
            i++;
        }
        while(i<j && !isAlpha(s[j])){
            j--;
        }
        if(i>=j)
            return true;
        if(s[i]<='z' && s[i]>='a')
            s[i] -= 32;
        if(s[j]<='z' && s[j]>='a')
            s[j] -= 32;
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
