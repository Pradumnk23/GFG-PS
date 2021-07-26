class Solution{
  public:
    string missingPanagram(string str){
    
     //Your code here
     int hstr[26] = {0};
    
    for(auto x: str)
    {
        if(x >= 'A' && x <= 'Z')
        {
            hstr[x-'A']++;
        }
        else if(x >= 'a' && x <= 'z')
        {
            hstr[x-'a']++;
        }
    }
    
    string res;
    for(int i = 0; i < 26; i++)
    {
        if(hstr[i] == 0)
        {
            res += (i + 'a');
        }
    }
    if(res.length())
        return res;
    return "-1";  
    }

};
