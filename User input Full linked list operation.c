#include<stdio.h>
#include<stdlib.h>
int count();
void print();
void insertfirst();
void insertlast();
void insertposition();
void insertafter();
void deletefirst();
void deletelast();
void deleteposition();
void deletedata();
void dataswap();
void update();
void userinput();

struct Node{
int data;
struct Node *link;
}*root;
typedef struct Node node;

void print()
{
    node *p;
    p=root;
    while(p->link!=NULL)
    {
        printf("%d => ",p->data);
        p=p->link;
    }
    printf("%d => NULL",p->data);
}

int count()
{
    int c=0;
    node *p;
    p=root;
     while(p!=NULL)
    {
        c++;
        p=p->link;
    }
    return c;
}

void insertfirst()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    printf("Enter a data to insert\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    temp->link=root;
    root=temp;
}

void insertlast()
{
    node *p, *temp;
    p=root;
    temp=(node*)malloc(sizeof(node));
    printf("Enter a data to insert\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=temp;
}

void insertposition()
{
    int d,f,i=1;
    node *p, *temp, *q;
     p=root;
     temp=(node*)malloc(sizeof(node));
     printf("Enter a data to insert\n");
     scanf("%d",&temp->data);
     temp->link=NULL;
     printf("Enter desired position\n");
    scanf("%d",&d);
    f=count();
    if(d<f)
    {
      for(i=1;i<d-1;i++)
      {
          p=p->link;
      }
        temp->link=p->link;
        p->link=temp;
    }
    else
        printf("there is not enough element, there is %d elements\n\n",f);
}
void insertafter()
{
    int d;
    node *p, *temp;
    p=root;
    temp=(node*)malloc(sizeof(node));
    printf("Enter The list data after which the element is going to add\n");
    scanf("%d",&d);
    printf("Enter a data to insert\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    while(p->data!=d)
    {
       p=p->link;
    }
    temp->link=p->link;
    p->link=temp;
}

void deletefirst()
{
    root=root->link;
}

void deletelast()
{
     node *p;
      p=root;
      while(p->link->link!=NULL)
      {
          p=p->link;
      }
      p->link=NULL;
}

void deleteposition()
{
    int f,d,i;
     node *p;
      p=root;
      f=count();
      printf("Enter desired position to delete\n");
      scanf("%d",&d);
      if(d<f)
      {
          for(i=1;i<d-1;i++)
          {
              p=p->link;
          }
          p->link=p->link->link;
      }
      else
                printf("\nInvalid position. you can choose between 2 to %d.\n",f-1);
}

void deletedata()
{
    int d;
    node *p;
      p=root;
      printf("Enter desired data to delete\n");
      scanf("%d",&d);
      if(d!=p->data)
      {
          while(p->link->data!=d)
      {
          p=p->link;
      }
      p->link=p->link->link;
      }
      else
                printf("Invalid Data\n");
}

void dataswap()
{
    int d,e;
    node *p, *q;
      p=root;
      q=root;
      printf("Enter two data of list separated by space to swap between them\n");
      scanf("%d%d",&d,&e);
      while(p->data!=d)
      {
          p=p->link;
      }
      while(q->data!=e)
      {
          q=q->link;
      }
      p->data=e;
      q->data=d;
}

void update()
{
    int a,b;
    node *p;
      p=root;
    printf("Enter two data separated by space to update into list, 1st one must from list & 2nd one is given by user\n");
      scanf("%d%d",&a,&b);
       while(p->data!=a)
      {
          p=p->link;
      }
      p->data=b;
}

void userinput()
{
    int a=1,f=1;
    node *p,*temp;
    root=(node*)malloc(sizeof(node));
    p=root;
    while(a)
    {
        if(f!=1){
        printf("Please enter the an element of the list\n");}
        scanf("%d",&p->data);
        p->link=(node*)malloc(sizeof(node));
        printf("Please enter 1 to continue or 0 to stop\n");
        scanf("%d",&a);
        if(a==0)
        {
             p->link=NULL;
             break;
        }
        p=p->link;
        f++;
    }
}

int main()
{
    int a=1;

    while(a)  ///To run the program many times
    {
    int i,c;
    printf("Please enter the first element of the new linked list you want to create\n");
    userinput();
    i=count();
    printf("There are %d element in the linked list\n",i);
    print();
    printf("\n\n");

    {///To Give user a choice to run operations.
    printf("To complete various operation please press desired key.\n\n");



    printf("To insert an element at the beginning of the list : 1 \n\n");
    printf("To insert an element at the end of the list : 2\n\n");
    printf("To insert an element at desired position except first & last position of the list : 3\n\n");
    printf("To insert an element after a finite element of the list : 4\n\n");

    printf("\n\nTo delete the first element of the list : 5\n\n");
    printf("To delete the last element of the list : 6\n\n");
    printf("To delete an element at desired position except first & last position of the list : 7\n\n");
    printf("To delete an element with desired data except first data of the list : 8\n\n");
    printf("To swap between two elements of the list : 9\n\n");
    printf("To update a data from list by new data : 10\n\n");
    }
    scanf("%d",&c);

    switch(c)
    {
        case 1: insertfirst();
                printf("So after inserting an element at the beginning of the list\n\n");
                print();
                printf("\n\n");
                break;
        case 2: insertlast();
                printf("So after inserting an element at the End of the list\n\n");
                print();
                printf("\n\n");
                break;
        case 3: insertposition();
                printf("So after inserting an element at desired position except first & last position of the list\n\n");
                print();
                printf("\n\n");
                break;
        case 4: insertafter();
                printf("So after inserting an element after a finite element of the list\n\n");
                print();
                printf("\n\n");
                break;
        case 5: deletefirst();
                printf("So after deleting the first element of the list\n\n");
                print();
                printf("\n\n");
                break;
        case 6: deletelast();
                printf("So after deleting the last element of the list\n\n");
                print();
                printf("\n\n");
                break;
        case 7: deleteposition();
                printf("So after deleting the element of the desired position of the list\n\n");
                print();
                printf("\n\n");
                break;
        case 8: deletedata();
                printf("So after deleting the element of the desired data except first data from the list\n\n");
                print();
                printf("\n\n");
                break;
        case 9: dataswap();
                printf("So after swapping between two given data from the list\n\n");
                print();
                printf("\n\n");
                break;
        case 10: update();
                printf("So updating the data of the list\n\n");
                print();
                printf("\n\n");
                break;
        default : printf("Invalid Input\n\n\n");
    }

    printf("Please enter 1 to repeat or 0 to stop\n");
    scanf("%d",&a);
     printf("\n\n\n\n");
    }
    return 0;
}

