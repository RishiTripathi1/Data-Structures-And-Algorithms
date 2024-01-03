/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* currentNode = head;
	int totalNodes = 0;
	while (currentNode != NULL && totalNodes < k) {
		currentNode = currentNode->next;
		totalNodes++;
	}
	if (totalNodes < k) {
		return head;
	}
	currentNode = head;
	ListNode* prevNode = NULL;
	ListNode* nextNode;
	int nodeCount = 0;
	while (nodeCount < k) {
		nextNode = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
		nodeCount++;
	}
	head->next = reverseKGroup(nextNode, k);
	return prevNode;
    }
};