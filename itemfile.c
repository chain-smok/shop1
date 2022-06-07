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
   myinput=fopen("Transaction.dat","rb+");
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
       fprintf(myinput,"%d %s %d %d",item.number,item.name,item.unit,item.price);
       fseek(myinput,(item.number-1)*sizeof(struct shop),SEEK_SET);
       fwrite(&item,sizeof(struct shop),1,myinput);
       //1 specifies the number of elements in the array that should be written to disk.
       //fwrite transfers a specified number of bytes beginning at a specified location in memory to 
       //a location in a file indicated by one of its arguments
   }
     fclose(myinput);
}

