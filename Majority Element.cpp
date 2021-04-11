int majorityElement(int a[], int size)
{
    int cnt=1;
    int res=a[0];
    for(int i=1; i<size; i++)
    {
        if(a[i]==res)
            cnt++;
        else
            cnt--;
        if(cnt==0){res=a[i];cnt=1;}
    }
    int countt=0;
    for(int i=0; i<size; i++)
    {
        if(a[i]==res)
            countt++;
    }
    if(countt<=size/2)
        res=-1;
    return res;
    
}
