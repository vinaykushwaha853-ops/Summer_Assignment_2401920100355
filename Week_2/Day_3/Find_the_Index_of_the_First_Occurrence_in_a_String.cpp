class Solution {
public:
    int strStr(string haystack, string needle) {
          if (needle.size() == 0) return 0;

          if (haystack.size() < needle.size()) return -1;

        for(  int i=0;i<=haystack.size()-needle.size();i++){
         string temp ="";
         for(int j=i;j<i+needle.size();j++){
            temp+=haystack[j];
         }
         if(temp==needle){
         return i;
         }
        }
        return -1;
    }
};
