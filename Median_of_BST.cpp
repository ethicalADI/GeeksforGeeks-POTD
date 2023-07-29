// Median of BST

void inorder(struct Node* node,vector<int> *v){
    if(node){
        inorder(node->left,v);
        v->push_back(node->data);
        inorder(node->right,v);
    }
}
float findMedian(struct Node *root){
    vector<int> v;
    inorder(root,&v);
    int n = v.size();
    if(n%2) return v[n/2];
    return (v[n/2]+v[(n/2)-1])/2.0;
}
