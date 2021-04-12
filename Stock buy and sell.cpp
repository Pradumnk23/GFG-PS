class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        int right=0;
        vector<vector<int>> ans;
        vector<int> v;
        for(int i=0; i<n-1; i++)
        {
            if(A[i+1]>A[i])
            {
                v.push_back(i);
                while(A[i+1]>=A[i] && i<n-1)
                {
                    right=i+1;
                    i++;
                }
                v.push_back(right);
                ans.push_back(v);
                v.clear();
            }
        }
        return ans;
    }
};
