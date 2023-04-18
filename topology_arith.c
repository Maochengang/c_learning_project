#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXVEX 10
typedef char VerType;	//����ֵ����

struct EdgeNode {
	int adjvex;	//�ڽӵ��򣬴洢�ö����Ӧ���±�
	int weight;	//���ڴ洢Ȩֵ�����ڷ���ͼ���Բ���Ҫ
	EdgeNode* next;	//��һ����� 
};

struct VertexNode {
	int in;	//���
	VerType data;	//ֵ
	EdgeNode* firstedge;	//�ڽӱ�ͷָ�� 
};

struct Graph {
	VertexNode vers[MAXVEX];
	int numVertexes, numEdges;	//�������ͱ��� 
};

/* ����������Gû�л�·������������������в�����OK�����л�·����ERROR */
bool TopologicalSort(Graph* G) {
	EdgeNode* e;
	int i, k, gettop;
	int top = 0;	//ջָ���±�
	int count = 0;	//ͳ������������
	int* stack;	//�洢���Ϊ0�Ķ���
	stack = (int*)malloc(G->numVertexes * sizeof(int));

	for (i = 0; i < G->numVertexes; i++)	//�������н�� 
		if (G->vers[i].in == 0)
			stack[++top] = i;	//�����Ϊ0�Ķ�����ջ

	while (top != 0) {
		gettop = stack[top--];	//��ջ
		printf("%c ", G->vers[gettop].data);
		count++;	//ͳ�����������
		for (e = G->vers[gettop].firstedge; e; e = e->next) {
			//�������
			k = e->adjvex;
			if (!(--G->vers[k].in))	//��k�Ŷ����ڽӵ����ȼ�1
				stack[++top] = k;	//��Ϊ0����ջ���Ա��´�ѭ����� 
		}
	}
	if (count < G->numVertexes)	//���countС�ڶ�������˵�����ڻ�
		return false;
	else
		return true;
}

/* ͼ��ʼ�� */
void CreateGraph(Graph* G) {
	int i, m, n;

	printf("���붥�����ͱ�����\n");
	scanf("%d,%d", &G->numVertexes, &G->numEdges);
	printf("���붥��ֵ��\n");
	for (i = 0; i < G->numVertexes; i++) {
		getchar();	//�Ե��س�
		scanf("%c", &G->vers[i].data);
	}
	//��ʼ��ͼͷ���ָ������ֵ 
	for (i = 0; i < G->numVertexes; i++) {
		G->vers[i].firstedge = NULL;
		G->vers[i].in = 0;	//���Ϊ0 
	}
	printf("����ߣ�\n");
	for (i = 0; i < G->numEdges; i++) {
		scanf("%d,%d", &m, &n);
		EdgeNode* newNode = (EdgeNode*)malloc(sizeof(EdgeNode));
		newNode->next = G->vers[m].firstedge == NULL ? NULL : G->vers[m].firstedge;
		newNode->adjvex = n;
		G->vers[m].firstedge = newNode;
		G->vers[n].in++;	//���+1 
	}
}

int main() {

	Graph* G = (Graph*)malloc(sizeof(Graph));
	CreateGraph(G);
	if (TopologicalSort(G)) {
		printf("����������ɣ�\n");
	}
	else {
		printf("ͼ���ڻ�");
	}
	return 0;
}
