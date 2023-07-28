//Lowest Common Ancestor in a BST

class Solution{
    public:
       Node* LCA(Node *root, int n1, int n2)
        {
            // Making n1 < n2
            if(n1 > n2){
                swap(n1 , n2);
            }
            
            Node * temp = root;
            
            while(temp != NULL){
                
                int x = temp->data;
                
                // Node value within [n1,n2]
                if(n1 <= x and x <= n2){
                    return temp;
                }
                
                // Node data is smaller than x , move right
                else if(n1 > x){
                    temp = temp->right;
                }
                
                // Node data is greater than even n2 , move left
                else if(x > n2){
                    temp = temp->left;
                }
                
                
                
            }
            
            // Dummy return statement
            return NULL;
            
            
        }

};
