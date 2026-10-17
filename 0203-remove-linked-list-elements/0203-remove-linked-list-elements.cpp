
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* temp = head;

        while (temp != nullptr && temp->next != nullptr) {
            if (temp->next->val == val) {
                ListNode* temp2 = temp->next;
                temp->next = temp2->next;
                delete temp2;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
