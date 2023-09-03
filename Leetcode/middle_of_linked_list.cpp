struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    
    ListNode* middleNode(ListNode* head) {
        int size = getSize(head);
        ListNode* half_list = traverseUntil(head, size/2);
        return half_list; 
    }

    int getSize(ListNode* head){
        if(head==nullptr){
            return 0;
        }
        return 1 + getSize(head->next);
    }

    // Pre: position is always in range 0 <= position <= size_linked_list
    ListNode* traverseUntil(ListNode* head, int position){
        if(position == 0){
            return head;
        } 
        return traverseUntil(head->next, position-1);
    }
};

int main(){
    ListNode* head = new ListNode(1); 
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next  = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* middle_node; 
    middle_node = head->middleNode(head);

    return 0;
}