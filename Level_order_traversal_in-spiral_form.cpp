// Level order traversal in spiral form

vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    if(root == NULL) return ans;
    queue<Node*> q;
    q.push(root);
    int level = 1;
    while(!q.empty())
    {
        int x = q.size();
        vector<int> temp;
        while(x--)
        {
            Node*front = q.front();
            q.pop();
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
            temp.push_back(front->data);
        }
        if(level & 1) reverse(temp.begin() , temp.end());
        ans.insert(ans.end() , temp.begin() , temp.end());
        level++;
    }
    return ans;
}
