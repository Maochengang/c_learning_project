#define _CRT_SECURE_NO_WARNINGS
#include<iostream>						//�궨��
		
typedef int ElemType;					//����������Ͷ���
typedef struct LNode {					//������Ľṹ����
	ElemType data;						//�������
	struct LNode* link;					//�������ָ��
}LNode, * LinkList;

int Search_k(LinkList list,int k) {
	LNode* p = list->link, * q = list->link;		//ָ��p,qָʾ��һ�����
	int count = 0;						
	while (p!= NULL) {								//��������ֱ�����һ�����
		if (count < k)count++;						//��������count<kֻ�ƶ�p
		else q = q->link;
		p = p->link;								//֮����p,qͬ���ƶ�
	}//while
	if (count < k)									
		return 0;									//����ʧ�ܷ���0
	else {											//�����ӡ����1
		printf("%d", q->data);
		return 1;
	}
}//search_k

/*int main_25(void) {
	Search_k;
}*/
