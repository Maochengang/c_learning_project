#define _CRT_SECURE_NO_WARNINGS
#include<iostream>						//宏定义
		
typedef int ElemType;					//链表结点的类型定义
typedef struct LNode {					//链表结点的结构定义
	ElemType data;						//结点数据
	struct LNode* link;					//结点链接指针
}LNode, * LinkList;

int Search_k(LinkList list,int k) {
	LNode* p = list->link, * q = list->link;		//指针p,q指示第一个结点
	int count = 0;						
	while (p!= NULL) {								//遍历链表直到最后一个结点
		if (count < k)count++;						//计数，若count<k只移动p
		else q = q->link;
		p = p->link;								//之后让p,q同步移动
	}//while
	if (count < k)									
		return 0;									//查找失败返回0
	else {											//否则打印返回1
		printf("%d", q->data);
		return 1;
	}
}//search_k

/*int main_25(void) {
	Search_k;
}*/
