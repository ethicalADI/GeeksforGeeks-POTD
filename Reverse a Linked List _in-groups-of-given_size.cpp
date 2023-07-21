//Reverse a Linked List in groups of given size

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL)
        {
            return NULL;
        }
         struct node*prev=NULL,*curr=head,*future=NULL;
         int cnt=0;
        while(curr!=NULL && cnt<k)
        {
            
        future=curr->next;
        curr->next=prev;
        prev=curr;
        curr=future;
        cnt++;
        }
       if(future!=NULL)
       {
          head->next=reverse(future, k);
       }
       return prev;
    }
};
