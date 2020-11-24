//ɾ�������е��ڸ���ֵ val �����нڵ㡣
//
//ʾ�� :
//
//����: 1->2->6->3->4->5->6, val = 6
//��� : 1->2->3->4->5


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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL)
            return NULL;
        ListNode* phead = new ListNode(-1);
        phead->next = head;
        ListNode* pre, * cur;
        pre = phead;
        cur = head;
        while (cur)
        {
            if (cur->val == val)
            {
                ListNode* temp = cur;
                pre->next = cur->next;
                cur = cur->next;
                delete temp;
                temp = NULL;
            }
            else
            {
                pre = pre->next;
                cur = cur->next;
            }

        }
        return phead->next;
    }
};