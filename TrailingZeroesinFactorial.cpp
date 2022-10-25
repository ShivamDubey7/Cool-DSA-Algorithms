int Solution::trailingZeroes(int A) {
    
     int a=A;
    int ans=0;
    for(int i=5;i<=A;i=i*5)
    {
        int num=a/i;
        ans+=num;
    }
   
    return ans;
}
