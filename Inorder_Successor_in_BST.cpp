//Inorder Successor in BST

class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
   void inorder(Node* root, vector<Node*> &ans)
    {
        if(!root)
            return;
        inorder(root->left, ans);
        ans.push_back(root);
        inorder(root->right, ans);
    }
    
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        vector<Node*> ans;
        inorder(root, ans);
        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]== x)
                if(i != ans.size()-1)
                    return ans[i+1];
        }
        return NULL;
    }
};
