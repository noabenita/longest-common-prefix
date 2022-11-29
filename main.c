char * longestCommonPrefix(char ** strs, int strsSize){
    int i;
    int min_len = 200;
    int min_str = 0;
    for (i = 0; i<strsSize; i++){
        if (strlen(strs[i]) < min_len){
            min_len = strlen(strs[i]);
            min_str = i;
        }
    }
    
    int j = 0;
    int final = 0;
    int c = 0;
    char str[200] = "";
    for (j = 0; j < min_len; j++) {
      for (c = 0; c <strsSize; c ++) {
        if ((strs[c])[j] != (strs[i-1])[j]){
          final = 1;
          break;
        }
      }
      if (final == 0) {
        strncat(str, &((strs[i-1])[j]), 1);
      }
      else {
        break;
      }
      
    }
    
    return strdup(str);  
    
}


int main() {

  char* strs[] = {"flower","flow","flight"};
  char* ans = longestCommonPrefix(strs, 3);
  printf("%s", ans);
}
