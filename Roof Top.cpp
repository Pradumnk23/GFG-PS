class Solution{
    public:
        int maxStep(int A[], int N){
        int cnt=0,maxm=0;
        for(int i=1; i<N; i++)
        {
            if(A[i]>A[i-1])
                {cnt++;maxm=max(maxm,cnt);}
            else
                {maxm=max(maxm,cnt);cnt=0;}
        }
        return maxm;
    }
};
