// wap to sort the list using quick sort
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void quicksort(int a[],int l,int r);
int partition(int a[],int l, int r);

//.......................................Main Function Calling.................................
int main(){
int size,i,a[MAX];
printf("Enter The Array Size\n");
scanf("%d",&size);

//.........................................getting array...............................................
for(i=0;i<size;i++){
     scanf("%d",&a[i]);
   }
//......................................calling Quick Sort.......................................

quicksort(a,0,size);

//.....................................Display the Sorted Array...........................
printf("After Quick Sort Array is:\n");
      for(i=0;i<size;i++){
         printf("%d",a[i]);
       
return 0;
}
//.....................................Quick Sort func define........................................
void quicksort(int a[],int l ,int r){
      if(l<r){ //l=left, r=right
      int q=parition(a,l,r);
      quicksort (a,l,q-1);
      quicksort(a,q+1,r);
}
}
//.......................................Position Defination..........................................
int parition(int a[], int l,int r){
          int j,temp,i=1;
          for(i=0;i<r-1;j++){
              //Swap Values
            if(a[j]<a[r-1]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                i++;
}
}
//..................................place pivot at iyts positon by Swapping...............................
                temp=a[j];
                a[j]=a[r-1];
                a[r-1]=temp;
                return i;
          }
}
