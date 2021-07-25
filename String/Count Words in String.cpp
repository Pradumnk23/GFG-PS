class Solution{
  public:
    int countWords(string str){
        int cnt=1;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]==' ')
                cnt++;
        }
        return cnt;
    }
};
