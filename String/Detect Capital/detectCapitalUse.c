bool detectCapitalUse(char* word) {
    int i,len = strlen(word);
    if(len==1) return true;//仅有一个字符时，返回true
    if(word[0]<=90 && word[0]>=65){ //首字母大写
        if(len==2) return true; //仅有两个字符时，返回true
        bool isCapital = (word[1]<=90 && word[1]>=65);
        for(i=2;i<len;i++){ //判断剩余的字符是否和第二个字符有相同的大小写
            bool capital = (word[i]<=90 && word[i]>=65);
            if(isCapital != capital) return false;
        }
        return true;
    }
    else{ //首字母小写
        for(i=1;i<len;i++){ //判断剩余的字符是否全为小写
            if(word[i]>122 || word[i]<97)
                return false;
        }
        return true;
    }
}
