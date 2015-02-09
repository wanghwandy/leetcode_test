#include "data_struct.h"

/*构造单链表*/
void struct_soulation::create_link_list(struct ListNode **l_node,vector<int> &v_data){
	struct ListNode *p_node,*q_node;
	*l_node = (struct ListNode *)malloc(sizeof(struct ListNode));
	if (*l_node != NULL){
		p_node = (*l_node);
		for (int i = 0; i < v_data.size(); i++){
			q_node = (struct ListNode *)malloc(sizeof(struct ListNode));
			if (q_node != NULL){
				p_node->next = q_node;
				q_node->val = v_data.at(i);
				p_node = q_node;
			}
		}
		p_node->next = NULL;
	}
}