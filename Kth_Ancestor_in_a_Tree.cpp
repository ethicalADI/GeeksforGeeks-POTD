// Kth Ancestor in a Tree

int kthAncestor(Node *root, int k, int node)
{
    // Code here
    if(root==NULL)return -1;
   unordered_map<int,int>parent;
   parent[root->data]=0;
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
       Node* temp=q.front();
       q.pop();
       if(temp->left){
           q.push(temp->left);
           parent[temp->left->data]=temp->data;
       }
       if(temp->right){
           q.push(temp->right);
           parent[temp->right->data]=temp->data;
       }
       }
       int temp1=node;
   while(k>0){
      temp1= parent[temp1];
      k--;
      
      }
        if(temp1==0)return -1;
        return temp1;
}
