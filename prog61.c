/* Que. Design , develop , and implement menu driven programmme in c for following operation on stack of integers
1. (a)push an element:- insert
2. (b)pop an element :- exit,top
3. (c)Demonstrate how stak can be used to check pellindrome
4. (d)exit   */


#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack[MAX],item;
int ch,top=-1,count=0,status=0;		

//Push Function..........................

void push(int stack[],int item)
{
   if (top==(MAX-1))
   printf("\n\nStack is overflow");
   else
   {
   stack[++top]=item;
   status++;
   }
}
//Pop Function...........................
int pop(int stack[]){
   int ret;
   if (top==-1)
   printf("\n\nstack is underflow");
   else{
   ret=stack[top--];
   status--;
   printf("\npopped element is %d",ret);
   }
return ret;
}
//Function to check stack is pallindrome.........................
void palendrome(int stack[]){
   int i,temp;
   temp=status;
   for(i=0;i<temp;i++)
   {
      if(stack[i]=pop(stack))
      count++;
   }
       if (temp==count)
          printf("\nStack contents are pallindrome");
       else {
          printf("\n stack contains are not pallindrome");
}
}

//function to display stack......................................
void display(int stack[]){
      int i;
      printf("\nthe stack contents are");
      if (top==-1)
          printf("\nstack is empty");
      else{
         for(i=top;i>=0;i--)
         {
            printf("\n....\n|%d|",stack[i]);
            printf("\n");
         }
}
}
//Main Function.................................

void main()
{
do{
printf("\n\n---MAIN MENU---\n");
printf("\n1.PUSH in the stack");
printf("\n2.POP in the stack");
printf("\n3.PALLINDROME check");
printf("\n4. EXIT");
printf("\n Enter Your Choice\n");
scanf("%d",&ch);
switch(ch){
case 1: printf("enter the element to be pushed\n");
	scanf("%d",&item);
	push(stack,item);
	display(stack);
	break;
case 2:item=pop(stack);
	display(stack);
	break;
case 3:palendrome(stack);
	break;
default : exit(0); 
printf("\nEnd");
}
}
while(ch!=4);
}
