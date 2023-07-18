
//Longest Repeating Subsequence

class Solution
public:
int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.size();
		    vector<vector<int>> v(n + 1, vector<int> (n + 1, 0));
		    int i, j;
		    i = j = 1;
		    while(i <= n)
		    {
		        j = 1;
		        while(j <= n)
		        {
		            if((str[i - 1] == str[j - 1]) && (i != j))
		            {
		                v[i][j] = 1 + v[i - 1][j - 1];
		            }
		            else
		            {
		                v[i][j] = max(v[i - 1][j], v[i][j - 1]);
		            }
		            j++;
		        }
		        i++;
		    }
		    int x = v[n][n];
		    return x;
		}

};
