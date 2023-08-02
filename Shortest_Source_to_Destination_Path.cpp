//Shortest Source to Destination Path

class Solution {
  public:
    int shortestDistance(int n, int m, vector<vector<int>> A, int X, int Y) {
        int ans=0;
        if(A[0][0]==0)return -1;
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        queue<pair<int,int>>q1;
        q.push({0,0});
        vis[0][0]=1;
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            if(p.first==X and p.second==Y){return ans;}
            int x=p.first;
            int y=p.second;
            if(x+1<n and A[x+1][y]==1){
                if(vis[x+1][y]==1){}
                else{q1.push({x+1,y});vis[x+1][y]=1;}
            }
            if(x-1>=0 and A[x-1][y]==1){
                if(vis[x-1][y]==1){}
                else{q1.push({x-1,y});vis[x-1][y]=1;}
            }
            if(y+1<m and A[x][y+1]==1){
                if(vis[x][y+1]==1){}
                else{q1.push({x,y+1});vis[x][y+1]=1;}
            }
            if(y-1>=0 and A[x][y-1]==1){
                if(vis[x][y-1]==1){}
                else{q1.push({x,y-1});vis[x][y-1]=1;}
            }
            if(q.empty()){
                ans++;
                q=q1;
                while(!q1.empty()){
                    q1.pop();
                }
            }
        }
        return -1;
    }
};
