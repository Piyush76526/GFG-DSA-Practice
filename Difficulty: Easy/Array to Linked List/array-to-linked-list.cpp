/* Linked List Node Structure
class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
       Node*head = new Node(arr[0]);
       Node*temp = head;
       for(int i = 1;i<arr.size();i++){
           temp->next = new Node(arr[i]);
           temp = temp->next;
       }
        return head;
    }
};