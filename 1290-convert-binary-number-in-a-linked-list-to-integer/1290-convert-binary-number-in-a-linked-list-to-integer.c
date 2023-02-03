/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){

    struct ListNode* temp = head; 
    int length = 0; 
    
    while(temp != NULL)
    {
        length++;
        temp = temp->next; 
    }
    
    int num = 0;
    
    temp = head; 
    while(temp != NULL)
    {
        num |= (temp->val*(1 << --length));
        temp = temp->next; 
    }
    
    return num; 
}