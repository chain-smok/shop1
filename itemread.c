#include <stdio.h>
#include <stdlib.h>
struct shop{
   int number;
   char name[100];//存品項名字
   int unit;//存品項數目
   int price;
};

void main( ){
    struct shop item;
    FILE *myinp;
   myinp=fopen("Transaction.txt ","rb+");
   if(!myinp){
      printf("Error:Cannot open file\n");
      exit(1);
   }
  printf("Enter product number:");
   scanf("%d",&item.number);
   while(item.number!=0){
      fseek(myinp,(item.number-1)*sizeof(struct shop),SEEK_SET);
      fread(&item,sizeof(struct shop),1,myinp);
      if(item.number==0){
       printf("Record not found\n");
      }
      else{
      printf("%d %s %d %d %d\n",item.number,item.name,item.unit,item.price,(item.unit)*(item.price));
      printf("Enter product number:");
      scanf("%d",&item.number);
   }
   }
      fclose(myinp);
}
