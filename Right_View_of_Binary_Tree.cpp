//Right View of Binary Tree

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
     vector<int> rightView(Node *root)
    {
       // Your Code here
       queue<Node*> q;
       vector<int> res;
       if(root==NULL)
          return res;
       q.push(root);
       q.push(NULL);
       while(!q.empty())
       {
           Node *node=q.front();
           q.pop();
           if(!q.empty()&&q.front()==NULL)
             res.push_back(node->data);
            if(node==NULL)
            {
                if(!q.empty())
                  q.push(NULL);
            }
            else
            {
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
       }
       return res;
    }
};
