class Solution
{   public:
    Node *solve(Node *head, Node *prev){
        if(head==NULL){
            return head;
        }
        Node *nxt = solve(head->next,head);
        if(nxt==NULL){
            return head;
        }
        else{
            if(nxt->data>head->data){
                if(prev!=NULL){
                    prev->next = nxt;
                }
                return nxt;
            }
            else{
                return head;
            }
        }
    }
    public:
    Node *compute(Node *head){
       return solve(head, NULL);
    }
    
};
   
