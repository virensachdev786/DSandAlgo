/*
	TREE DATA STRUCTURE
#creating a tree
1.headers
2.struct define
	int data
	struct xyz *left,*right
3.head, temp = null
4.function createTree(item)
	1.malloc
	2.new -> data = NULL
	3.new -> left = NULL
	4.new -> right = NULL
	5.if head == NULL
		1.head = NEW
	6.else
		1.temp = head
		2.while temp ->  left != NULL
			1.temp = temp -> left(take temp fordward)
		3.temp -> left = NEW;

		1.temp1 = head
		2.while temp1 -> right != NULL
			1.temp1 = temp -> right(taking temp fordward)
		3.temp -> right = NEW;
5.function display()
	1.struct tree *current = head
	2.if head == null
		return
	3.print  nodes are
	4.while(current != NULL)
		1.print %d, current -> data
		2.currrent = current -> right
 
		

	






*/





#include<stdio.h>
#include<stdlib.h>


