class Solution {
public:
    Node* reverse(Node* head) {
        Node* prev = nullptr;
        while (head) {
            Node* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }

    Node* compute(Node* head) {
        head = reverse(head);

        int mx = head->data;
        Node* curr = head;

        while (curr && curr->next) {
            if (curr->next->data < mx) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
                mx = curr->data;
            }
        }

        return reverse(head);
    }
};