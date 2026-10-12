class Solution {
public:
    int cycleStart(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                Node* temp = head;

                while (temp != slow) {
                    temp = temp->next;
                    slow = slow->next;
                }

                return temp->data;
            }
        }

        return -1;
    }
};