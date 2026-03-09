#include <iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val((int)NULL), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

void InsertFrontLinkedList(ListNode** linkedlist, int val){
    ListNode* list = new ListNode;
    list->val = val;
    list->next = *linkedlist;
    *linkedlist = list;
}

void InsertBackLinkedList(ListNode* &linkedlist, int val){
    ListNode* newList = new ListNode(val);
    if( linkedlist == nullptr){
        linkedlist = newList; 
        return;
    }
    ListNode* temp = linkedlist;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newList;
}

void PrintLinkedList(ListNode* list){
    while(list->next != nullptr){
        cout<<list->val<<" -> ";
        list = list->next;
    }
    cout<<list->val;
}

class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            int sum = x + y + carry;
            carry = sum / 10;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;

            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }
        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};

int main()
{
    ListNode* l1 = nullptr;
    ListNode* l2 = nullptr;

    InsertBackLinkedList(l1, 2);
    InsertBackLinkedList(l1, 4);
    InsertBackLinkedList(l1, 3);

    InsertBackLinkedList(l2, 5);
    InsertBackLinkedList(l2, 6);
    InsertBackLinkedList(l2, 4);
    Solution result;

    PrintLinkedList(result.addTwoNumbers(l1,l2));
    return 0;
}