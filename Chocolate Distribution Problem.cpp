//Chocolate Distribution Problem

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    long long mn = INT_MAX;
    int i = 0, j = m-1;
    while(j < n){
        mn = min(a[j]-a[i], mn);
        i++;
        j++;
    }
    return mn;
    }   
};
