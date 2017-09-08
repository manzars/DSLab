#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
int data;
struct linked_list *next;	
}node;
void insend(node **q,int no)
{
	node *ptr,*temp;
	ptr=(*node)malloc(sizeof(node));
	ptr->dat=no;
	
	}
	void del(node**q,int no)
int main(){
	node *start,*prt,*temp;
	int i,n,j,no,c;
	printf("enter the no of node");
	scanf("%d",&n);
	printf("enter node no 1");
	start=(*node)malloc(sizeof(node));
	scanf("%d",&start->data);
	temp=start;
	for(i=0;i<n;i++)
	{
		ptr=(*node)malloc(sizeof(node));
	printf("enter node no %d",i+1);
	scanf("%d",&ptr->data);
	temp->next=ptr;
	temp=ptr;
		}
	temp->next=NULL;
	do
	{
		printf("enter your choice\n");
		printf("1-insertion\n2-deletion\n3-traverse\n4-exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			insbeg(&start,no);
			break;
			case 2:
			insend(&start,no);
			break;
			case 3:
			insafter(&start,no);
			break;
			default:
			printf("invalid option\n");
			break;
			}
		break;
		case 2:
		printf("enter the no to be deleted\n");
		scanf("%d",&no);
		del(&start,no);
		break;
		case 3:
		traverse(start);
		break;
		case 4:
		exit(0);
		default: 
		printf("invalid option");
		break;
	}
	}while(1);
	
return 0;
}
