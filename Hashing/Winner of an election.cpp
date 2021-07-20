class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int>mp;
        for(int i=0; i<n; i++)
            mp[arr[i]]++;
        int mv=0;
        string win;
        for(auto i:mp)
        {
            if(i.second>mv)
            {
                mv=i.second;
                win=i.first;
            }
            else if(i.second==mv && win.compare(i.first)>0)
                win=i.first;
        }
        return {win, to_string(mv)};
    }
};
