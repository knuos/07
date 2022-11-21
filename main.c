#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode {
	element key;
	struct TreeNode *left, *right;
} TreeNode;

TreeNode * new_node(int item)
{
	TreeNode * temp = (TreeNode *)malloc(sizeof(TreeNode));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

TreeNode * insert_node(TreeNode * node, int key)
{
	if (node == NULL) return new_node(key);

	if (key < node->key)
		node->left = insert_node(node->left, key);
	else if (key > node->key)
		node->right = insert_node(node->right, key);

	return node;
}

int min(TreeNode *root){
	\\아래에 코드를 작성하시오.
}

int max(TreeNode *root){
	\\아래에 코드를 작성하시오.
}

int main()
{

	TreeNode * root = NULL;
	int temp;

	printf("이진 탐색 트리에 5개의 정수를 삽입 하시오.\n");
	for(int i=0; i<5; i++){
		scanf("%d", &temp);
		root = insert_node(root, temp);
	}
	
	printf("최소값: %d, 최대값: %d\n", min(root), max(root));
		
	return 0;
}
