int countBeautifulPairs(int* nums, int numsSize) {
    int i,c=0,a,b,j,k;
    for(i=0;i<numsSize;i++)
    {
        while(nums[i]>0)
        {
            a=nums[i]%10;
            nums[i]=nums[i]/10;
        }
        int hcf;
        for(j=i+1;j<numsSize;j++)
        {
             b=nums[j]%10;
             for(k=1;k<=a;k++)
             {
                 if(a%k==0 && b%k==0)
                    hcf=k;
             }  
           if(hcf==1)
             c++;
        }     
    }
    return c;
}