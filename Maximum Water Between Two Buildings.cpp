class Solution{
    public:
    // Return the maximum water that can be stored 
    int maxWater(int height[], int n) 
    { 
        int l=0,h=n-1, ans=0, w=0;
        while(l<=h)
        {
            int x=(h-l-1);
            w=x*min(height[l],height[h]);
            ans=max(ans,w);
            if(height[l+1]==height[h-1])
                {h--;l++;}
            else if(height[l]<height[h])
                l++;
            else
                h--;
        }
        return ans;
    } 
};
