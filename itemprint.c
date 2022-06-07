#include <stdio.h>
#include <stdlib.h>
struct shop{
   int number;
   char name[100];
   int unit;
   int price;
};
int main( )
{
    int n,i;
    struct shop item;
    FILE *myinput;
   myinput=fopen("Transaction.dat","w");
   if(!myinput){
      printf("Error:Cannot open file\n");
      exit(1);
   }
   printf("How many records do you want to input?");
     scanf("%d",&n);
     for(i=0;i<n;i++){
       scanf("%d",&item.number);
       scanf("%s",item.name);
       scanf("%d",&item.unit);
       scanf("%d",&item.price);       
       fprintf(myinput,"%d %s %d %d\n",item.number,item.name,item.unit,item.price);
   }
     fclose(myinput);
}

