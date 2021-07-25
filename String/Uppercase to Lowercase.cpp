class Solution{
  public:
    string caseConversion(string str){
        for (int i = 0; i < str.length(); i++) {
        int c = str[i];
        if (isupper(c))
            str[i] = tolower(c);
             
        }
        return str;
    }
};
