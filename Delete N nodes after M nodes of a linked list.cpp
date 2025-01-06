
class Solution {
  public:
  
  
    Node* linkdelete(Node* head, int n, int m) {
        int steps = 0;
        int del = n;
        Node* temp = head;
        
        while(temp != NULL){
            if(steps==m){
                while(del>0 && temp->next !=NULL){
                    temp->data = temp->next->data;
                    Node* temp2 =temp->next;
                    temp->next=temp2->next;
                    temp2->next=NULL;
                    delete(temp2);
                    del--;
                }
                
                if(del!=0){
                    Node* temp2 = head;
                    while(temp2->next->next != NULL){
                        temp2=temp2->next;
                    }
                        Node* temp3= temp2->next;
                        temp2->next=NULL;
                        delete(temp3);
                        return head;
                }
                steps = 0;
                del=n;
                
            }
            else{
                steps++;
                temp=temp->next;
            }
        }
        
        return head;
    }
};

