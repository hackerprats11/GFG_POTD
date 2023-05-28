class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
            Node * temp=head;
           
           int sz=0;
           while(temp!=NULL){
               sz++;
               temp=temp->next;
           }
           if(sz<n) return -1;
           int x=1;
           Node *temp2=head;
           while(true){
               if(sz-n+1==x) return temp2->data;
               temp2=temp2->next;
               x++;
    }
    }
};