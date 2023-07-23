//Given a linked list of 0s, 1s and 2s, sort it

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
     Node* segregate(Node *head) {
        if (head==NULL)
        return head;
        vector<int> v;
        Node *temp=head;
        while(temp)
        {
            v.push_back(temp->data);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head;
        int i=0;
        while(temp)
        {
            temp->data=v[i++];
            temp=temp->next;
        }
        return head;
        
        
    }
};
