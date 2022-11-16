/*  Write a Menu Driven Program of Doubly Linked List 
1.insert
2.deletion
3.display
4.exit */

#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<conio.h>

   //node creation
 struct node{
         char ssn[25],name[25],dept[10],designation[25];
         int sal;
         long int phone;
         struct node *llink;
         struct node *rlink;
};

// Creation of Node
typedef struct node* NODE;
NODE first = NULL;
int count=0;
NODE create()

{
          NODE enode;
          enode = (NODE)malloc(sizeof(struct node));
          if( enode== NULL)
          {
                    printf("\nRunning out of memory");
                    exit(0);
           }
         printf("\nEnter the Serial No. of the employee: \n");
         scanf("%s", enode->ssn);
         printf("\nEnter the Name of the employee: \n");
         scanf("%s",enode->name);
         printf("\nEnter the Department of the employee: \n");
         scanf("%s",enode->dept);
         printf("\nEnter the Designation the employee: \n");
         scanf("%s",enode->designation);
         printf("\nEnter the Salary of the employee: \n");
         scanf("%d",&enode->sal);
         printf("\nEnter the PhoneNo of the employee: \n");
         scanf("%ld",&enode->phone);
         enode->llink=NULL;
         enode->rlink=NULL;
         count++;
         return enode;
}
// Insert at Front
NODE insertfront()
{
         NODE temp;
         temp = create();
          if(first == NULL)
         {
                 return temp;
          }
          temp->rlink = first;
          first->llink = temp;
          return temp;
}
void display()
{
          NODE cur;
          int nodeno=1;
          cur = first;
          if(cur == NULL)
          printf("\nNo. of Contents to display in DLL");
          while(cur!=NULL)
         {
        printf("\nENode:%d\n||Serial No.:%s\n|Name:%s\n|Department:%s\n|Designation:%s\n|Salary:%d\n|Phone no:%ld\n", nodeno, cur->ssn, cur->name,cur->dept, cur->designation, cur->sal, cur->phone);
                   cur = cur->rlink;
                    nodeno++;
         }
          printf("\nNo of employee nodes is %d",count);
}
NODE deletefront()
{
         NODE temp;
         if(first == NULL)
         {
                   printf("\nDoubly Linked List is empty");
                   return NULL;
         }
         if(first->rlink== NULL)
        {
                  printf("\nThe employee node with the Serial No.:%s is deleted", first->ssn);
                 free(first);
                 count--;
                  return NULL;
         }
         temp = first;
         first = first->rlink;
         temp->rlink = NULL;
         first->llink = NULL;
         printf("\nThe employee node with the Serial No.:%s is deleted",temp->ssn);
         free(temp);
         count--;
         return first;
}
NODE insertend()
{
          NODE cur, temp;
          temp = create();
          if(first == NULL)
          {
           return temp;
          }
         cur= first;
         while(cur->rlink!=NULL)
        {
         cur = cur->rlink;
         }
         cur->rlink = temp;
         temp->llink = cur;
          return first;
}

// node deltion at end......................
NODE deleteend()
{
         NODE prev,cur;
         if(first == NULL)
        {
                   printf("\nDoubly Linked List is empty");
                   return NULL;
        }
        if(first->rlink == NULL)
        {
                   printf("\nThe employee node with the Serial No.:%s is deleted",first->ssn);
                   free(first);
                   count--;
                   return NULL;
        }
         prev=NULL;
         cur=first;
        while(cur->rlink!=NULL)
        {
                  prev=cur;
                  cur = cur->rlink;
         }
         cur->llink = NULL;
         printf("\nThe employee node with the Serial No.:%s is deleted",cur->ssn);
         free(cur);
         prev->rlink = NULL;
         count--;
         return first;
}

// Main Function
void main()
{
    int ch,i,n;
    while(1)
    {
        printf("\n\n~~Menu~~");
        printf("\n1:Create DLL of Employee Nodes");
        printf("\n2:DisplayStatus");
        printf("\n3:InsertAtEnd");
        printf("\n4:DeleteAtEnd");
        printf("\n5:InsertAtFront");
        printf("\n6:DeleteAtFront");
        printf("\n7:Exit \n");
        printf("\nPlease enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : printf("\nEnter the no of Employees:   ");
                   scanf("%d",&n);
                   for(i=1;i<=n;i++)
                   first = insertend();
                   break;
          case 2:  display();
                   break;
          case 3:  first = insertend();
                   break;
          case 4:  first = deleteend();
                   break;
          case 5:  first = insertfront();
                   break;
          case 6:  first = deletefront();
                   break;
          case 7 : exit(0);
        default: printf("\nPlease Enter the valid choice");
        }//Switch 

    }//while
}//main




























/*void main(){
        int i=0;
        
        while(i)
        {
        printf("-------------------<Main Menu>-----------------\n");
        printf("1. For Create Enployee Data ,Press 1.\n");
        printf("2. For Display Enployee Data ,Press 2.\n");
        printf("3. For Insert At Front in Enployee Data ,Press 3.\n");
        printf("4. For Insert At End in Enployee Data ,Press 4.\n");
        printf("5. For Exit ,Press 5.\n");
        switch(i){
        case 1:
               break;
        case 2:
               break;
        case 3:
               break;
        case 4:
               break;
        case 5: exit(0);
        }//Switch
        
        }//While         
   
}*/


