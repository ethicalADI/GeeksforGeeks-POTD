//Remove duplicates from an unsorted linked list


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
   Node * removeDuplicates( Node *head) 
    {
        unordered_map<int, int> m;
        Node * t = head, * p =NULL;
        while(t){
            if(m[t -> data]) 
                p -> next = t -> next;
            else 
                p = t;
            m[t -> data] = 1;
            t = t -> next;
        }
        return head;
    }
};
