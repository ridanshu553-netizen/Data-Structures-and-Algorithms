class Solution {
public:
    bool isPalindrome(int x) {
      int digit;
      long long reverse=0;
      int orignal=x;
      while(x>0){
        digit=x%10;
        reverse=reverse*10 + digit;
        x=x/10;
      }
      if(reverse==orignal){
        return true;
      }
      else{
        return false;
      }
    }
};