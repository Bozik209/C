#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int num;
	struct node *next1;
	struct node *next2;
}node;


void func(node *head)
{
	node *current = head;
	int i;
	while (current->next1!=NULL)
	{
		
	}

}

void addLast(node *head, node *temp)
{
	node *current = head;
	while (current->next1)
	{
		current = current->next1;	 //מוביל למיקום האחרון
	}
	current->next1 = temp;			//תשים את טמפ במקום האחרון
	temp->next2 = current;			//הריצה לאחור 
}

node * newNode(int key)
{
	node *temp = (node *)malloc(sizeof(node));  //ההקצה הדינאמית
	if (!temp)
		return NULL;

	temp->num = key;
	temp->next1=NULL;
	temp->next2 = NULL;

	return temp;
}

void main()
{
	node *head=NULL;
	node *head_even=NULL;
	node *current = head_even;
	node *temp;

	head = newNode(1);
	current = head;
	int i;

	for (i = 2; i < 20; i+=2) //קליטת נתונים לרשימה המשותפת
	{
		temp = newNode(i);	  //שליחת נתונים לרשימה
		addLast(head, temp); 
		head->next2 = temp; //הגדרה לנקסט2 להצביע לאחרון
	}

	while (current)      // מציאת הזוגיים ברשימה
	{
		if (current->num % 2 == 0)
		{
			if (head_even == NULL)
			{
				head_even = newNode(current->num);
			}
			else
			{
				temp = newNode(current->num);
				addLast(head_even,temp);
			}
		}
	}



	while (head) //הדפסת הרשימה
	{
		printf("%d\n", head->num);
		head=head->next1;
	}

	printf("------------------------\n");
	int index = 0;
	while (index<10)
	{
		printf("%d\n", temp->num);
		temp = temp->next2;
		index++;
	}

	printf("------------------------\n");
	while (head_even) // הדפסת הרשימה הזוגית
	{
		printf("%d\n", head_even->num);
		head_even = head_even->next1;
	}
	getchar();
}
