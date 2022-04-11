#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int over = 0;
    ListNode* sum = new ListNode;
    ListNode* head = sum;
    while(l1 != NULL || l2 != NULL || over != 0) {
        if(l1 == NULL && l2 != NULL) {
            sum->val = l2->val + over;
            l2 = l2->next;
        }
        else if(l2 == NULL && l1 != NULL) {
            sum->val = l1->val + over;
            l1 = l1->next;
        }
        else if(l1 != NULL && l2 != NULL) {
            sum->val = l1->val + l2->val + over;
            l1 = l1->next;
            l2 = l2->next;
        }
        else {
            sum->val = over;
        }
        if(sum->val >= 10) {
            sum->val -= 10;
            over = 1;
        }    
        else {
            over = 0;
        }
        if(l1 != NULL || l2 != NULL || over != 0) {
            sum->next = new ListNode;
            sum = sum->next;
        }
    }
    return head;
}

int main() { _
    ListNode* h1 = new ListNode;
    ListNode* l1 = h1;
    for(int i = 0; i < 7; ++i) {
        l1->val = 9;
        if(i != 6) {
            l1->next = new ListNode;
            l1 = l1->next;
        }
    }
    
    ListNode* h2 = new ListNode;
    ListNode* l2 = h2;
    for(int i = 0; i < 4; ++i) {
        l2->val = 9;
        if(i != 3) {
            l2->next = new ListNode;
            l2 = l2->next;
        }
    }

    ListNode* sum = addTwoNumbers(h1, h2);
    while(sum != NULL) {
        printf("%d ", sum->val);
        sum = sum->next;
    }
    printf("\n");

}