// Added Comment
#include<stdio.h>
#include<conio.h>
#define MAX 5

typedef struct stack
{

   int a[MAX];
   int top;
}stack;

void inti(stack *s);
void push(stack *S,int x);
int pop(stack *s);
void display(stack *s);

void main()
{
    stack s;
    int x,ch;
    inti(&s);
    clrscr();

    do
    {
      printf("\n***** stack operation *****");
      printf("\n1. push ");
      printf("\n2. pop ");
      printf("\n3. print ");
      printf("\n4. Exit ");
      printf("\nEnter your choice ");
      scanf("%d",&ch);
      switch(ch)
      {
	case 1:
	   printf("\nEnter data for PUSH operation = ");
	   scanf("%d",&x);
	   push(&s,x);
	   break;

      case 2:
	  x=pop(&s);
	  if(x!=-1)
	  printf("\n Element poppped successfully !!!",x);
	  break;

     case 3:
	  display(&s);
	  break;

     case 4:
	 printf("Thanks !!!");
	 break;

     default:
	printf("\nPLZ Enter valid choice !!!");
     }
  }while(ch!=4);
      getch();
}
void inti(stack *s)
{
  s->top = -1;
}
void push(stack *s,int x)
{
   int i,n;

   if (s->top==MAX-1)
   {
     printf("\nStack is overflow !!! ");

   }
   else
   {

      s->top = s->top+1;
      s->a[s->top]=x;
      printf("\n%d is PUSHED Successefully !!!",x);
   }
}
int pop(stack *s)
{
   int x;
    if(s->top==-1)
    {
     printf("\nStack is Underflow ");
     return -1;
    }

     x=s->a[s->top];
     s->top=s->top-1;
     return x;

}
void display(stack *s)
{

   int i;

   for(i=s->top;i>=0;i--)
   {
      printf("\nYour PUSHED Data = %d ",s->a[i]);
   }
}

