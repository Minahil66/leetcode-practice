bool areOccurrencesEqual(char* s) {
    char ch;
    int count=0;
    int len=strlen(s);
    int freq[len];
    
    for(int i=0;i<len;i++){
        ch=s[i];
        count=0;
        for(int j=0;j<len;j++){
            if(s[i]==s[j]){
                count++;
           }
       }
    freq[i]=count;
    }
    for(int i=0;i<len;i++){
            if(freq[i]!=freq[0]){
                return false;
        }
    }
    return true;
}
