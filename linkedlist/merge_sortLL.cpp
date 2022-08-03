    // ListNode* merge(ListNode*l1,ListNode*l2)
    // {
    //     ListNode *prev = new ListNode();
    //     ListNode *curr = prev;
    //     while(l1!=NULL && l2!=NULL)
    //     {
    //         if(l1->val < l2->val)
    //         {
    //             curr->next = l1;
    //             l1 = l1->next;
    //         }
    //         else
    //         {
    //             curr->next = l2;
    //             l2 = l2->next;
    //         }
    //         curr = curr->next;
    //     }
    //     while(l1!=NULL)
    //     {
    //         curr->next = l1;
    //         l1 = l1->next;
    //         curr = curr->next;
    //     }
    //     while(l2!=NULL)
    //     {
    //         curr->next = l2;
    //         l2 = l2->next;
    //         curr = curr->next;
    //     }
    //     return prev->next;
    // }
    // ListNode* sortList(ListNode* head) {
    //     if(head == NULL || head->next == NULL) return head;
        
    //     ListNode *temp = NULL;
    //     ListNode *fast = head;
    //     ListNode *slow = head;
    //     while(fast && fast->next)
    //     {
    //         temp =slow;
    //         slow =slow->next;
    //         fast = fast->next->next;
    //     }
        
    //     temp->next = NULL;
    //     ListNode* l1 = sortList(head);
    //     ListNode* l2 = sortList(slow);
    //     return merge(l1,l2);
        
    // }