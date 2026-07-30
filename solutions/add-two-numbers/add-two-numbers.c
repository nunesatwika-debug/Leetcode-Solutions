/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *temp1=l1;
    struct ListNode *temp2=l2;
    struct ListNode *head=NULL,*t=head;
    int c=0;
    while(temp1!=NULL&&temp2!=NULL){
        struct ListNode *temp3=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp3->val=(temp1->val+temp2->val+c)%10;
        temp3->next=NULL;
        if(head==NULL){
            head=temp3;
        }
        else{
            t=head;
            while(t->next!=NULL){
                t=t->next;
            }
            t->next=temp3;
        }
        c=(temp1->val+temp2->val+c)/10;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    while(temp1!=NULL){
        struct ListNode *temp3=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp3->val=(temp1->val+c)%10;
        temp3->next=NULL;
        if(head==NULL){
            head=temp3;
        }
        else{
            t=head;
            while(t->next!=NULL){
                t=t->next;
            }
            t->next=temp3;
        }
        c=(temp1->val+c)/10;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        struct ListNode *temp3=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp3->val=(temp2->val+c)%10;
        temp3->next=NULL;
        if(head==NULL){
            head=temp3;
        }
        else{
            t=head;
            while(t->next!=NULL){
                t=t->next;
            }
            t->next=temp3;
        }
        c=(temp2->val+c)/10;
        temp2=temp2->next;
    }
    if(c){
    struct ListNode *temp3 = malloc(sizeof(struct ListNode));
    temp3->val = c;
    temp3->next = NULL;
    if(head==NULL){
            head=temp3;
        }
        else{
            t=head;
            while(t->next!=NULL){
                t=t->next;
            }
            t->next=temp3;
        }
}
    return head;
}