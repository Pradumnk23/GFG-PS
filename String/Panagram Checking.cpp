class Solution{
  public:
    bool isPanagram(string str){
    
    //Your code here
    set<char>s;
    for(int i=0; i<str.length(); i++)
        s.insert(tolower(str[i]));
    if(s.size()!=26)
        return false;
    return true;
    
    }
};
