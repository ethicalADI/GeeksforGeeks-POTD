//Reverse a Stack

class Solution{
public:
    void Reverse(stack<int> &St){
        queue<int>q;
        while(!St.empty())
        {
            int x;
            x = St.top();
            St.pop();
            q.push(x);
        }
        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            St.push(x);
        }
        
    }
};
