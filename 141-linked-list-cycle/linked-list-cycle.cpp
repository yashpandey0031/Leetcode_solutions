/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        std::unordered_set<ListNode*> visited;
        ListNode* curr = head;

        while (curr != nullptr) {
            // if node already seen → cycle
            if (visited.count(curr)) {
                return true;
            }

            visited.insert(curr);
            curr = curr->next;
        }

        // reached null → no cycle
        return false;
    }
};