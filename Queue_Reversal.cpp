//Queue Reversal

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        stack<int> s;
        queue<int> req;
        int n = q.size();
        for(int i=0;i<n;i++)
        {
            s.push(q.front());
            q.pop();
        }
        for(int i=0;i<n;i++)
        {
            req.push(s.top());
            s.pop();
        }
        return req;
    }
};
