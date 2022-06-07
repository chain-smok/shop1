#include <bits/stdc++.h>
using namespace std;
struct shop{
   char name[100];//存品項名字
   int unit;//存品項數目
   int price;
};
int main()
{
   int n,i,j;
   struct shop item[30];
   struct shop titem;
   printf("Enter how many records to entered?\n");
   cin>>n;
   for(i=0;i<n;i++)
{
    scanf("%s",item[i].name);
    scanf("%d",&item[i].unit);   
    scanf("%d",&item[i].price);
}
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++){
     if((item[i].unit*item[i].price)>(item[j].unit*item[j].price)){
       titem=item[i];
       item[i]=item[j];
       item[j]=titem;
     }
    }
   for(i=0;i<n;i++){
      printf("%s   %2d    %4d  %5d \n",item[i].name,item[i].unit,item[i].price,(item[i].unit)*(item[i].price));
}
}
