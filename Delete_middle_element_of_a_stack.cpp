// Delete middle element of a stack

class Solution
{
    public:
    //Function to delete middle element of a stack.
     void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int m=ceil(sizeOfStack/2);
        for(int i=0;i<sizeOfStack;i++)
        {
            if(i!=m)
                cout<<s.top()<<" ";
            s.pop();
        }
    }
};
