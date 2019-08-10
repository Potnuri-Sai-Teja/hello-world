#include<stdio.h>
void main()
{
int i,j;
int sum=0;
scanf("%d%d",&i,&j);
While(i!=1)
{
   i=j/i×100;
  if(i!=0 || i!=1){
scanf("%d%d",&i,&j);
}
   sum=sum+i;
}
Printr("%d \n",sum);
}
