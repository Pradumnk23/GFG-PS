long long int floorSqrt(long long int x) 
{
    // Your code goes here
    if(x==0 || x==1)
        return x;
    int i=1, ans=1;
    while(ans<=x)
    {
        i++;
        ans = i*i;
    }
    return i-1;
    
}
