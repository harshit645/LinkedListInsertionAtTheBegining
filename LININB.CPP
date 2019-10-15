#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *ptr;
};
typedef struct node NODE;
void main()
{
NODE *temp,*last=0,*head;
int choice=1;
printf("Insertion at the begining\n");
while(choice==1)
{
temp=(NODE *)malloc(sizeof(NODE));
printf("enter the data\n");
scanf("%d",&temp->data);
if(last==0)
{
head=last=temp;
}
else
{
temp->ptr=head;
head=temp;
}
printf("enetr the choice as you want \n");
scanf("%d",&choice);
}
last->ptr=0;
printf("the values of linked list are\n");
temp=head;
while(temp!=0)
{
printf("%d\t",temp->data);
temp=temp->ptr;
}
getch();
}





