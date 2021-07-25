class Solution{
  public:
    int countVowels(string str){
        char arr[26] = {0};
        int cnt=0;
        for(int i = 0;i<str.length();i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i')
            {
                if(arr[str[i] - 'a'] == false)
                {
                    arr[str[i] - 'a'] = true;
                        cnt++;
                }
            }
        }
        
        return cnt;
    }
};
