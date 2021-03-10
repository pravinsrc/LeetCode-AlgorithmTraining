#include "header.h"

class Solution {
public:
    int getDecimalValue(ListNode* head)
    {
        auto sum = 0;
        while (head != nullptr) {
            sum = sum * 2 + head->val;
            head = head->next;
        }

        return sum;
    }
};