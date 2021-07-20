class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
        map<char,int>m;
        for(auto it:s) 
            m[it]++;
        for(auto it:s) if(m[it]==1) return it;
        return '$';
    }

};
