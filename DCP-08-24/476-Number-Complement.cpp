class Solution {
public:
    int findComplement(int num) {
      int i=0;int result=0;
      while(num)
      {
        if(!(num&1))
        result|=(1<<i); 
        num>>=1;
        i++;
      }

    return result;
}};