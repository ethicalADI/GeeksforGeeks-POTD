//Nth catalan number

class Solution
{
public:
int mod=1e9+7;
    int findCatalan(int n) 
    {
        vector<int>dp(n+1,0);
        dp[0]=1;
        for(int siz=n-1;siz>=0;siz--)
        {
            vector<int>dummy(n+1,0);
            for(int bal=n;bal>=0;bal--)
            {
                int ans=0,np=0;
                if(bal>0) ans=dp[bal-1];
                if(bal<n) np=dummy[bal+1];
                dummy[bal]=(ans+np)%mod;
            }
            dp=dummy;
        }
        return dp[0];
    }
};
