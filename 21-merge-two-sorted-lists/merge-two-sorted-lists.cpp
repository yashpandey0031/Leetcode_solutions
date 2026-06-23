class Solution {
public:

    ListNode* convertarr2ll(vector<int>& arr) {

        if(arr.empty()) return nullptr;

        ListNode* head = new ListNode(arr[0]);
        ListNode* mover = head;

        for(int i = 1; i < arr.size(); i++) {
            ListNode* temp = new ListNode(arr[i]);
            mover->next = temp;
            mover = temp;
        }

        return head;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> arr;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1 != nullptr) {
            arr.push_back(temp1->val);
            temp1 = temp1->next;
        }

        while(temp2 != nullptr) {
            arr.push_back(temp2->val);
            temp2 = temp2->next;
        }

        sort(arr.begin(), arr.end());

        return convertarr2ll(arr);
    }
};