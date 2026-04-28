//BS-AD and AD-BS
#include<stdio.h>

struct date
{
   int y;
   int m;
   int d;
};

void display(struct date c)
{
   printf("\n %d-%d-%d ",c.y,c.m,c.d);
}

struct date adToBs(struct date c)
{
   struct date c2;
c2.y= c.y+56;
c2.m=c.m+8;
c2.d=c.d+16;

if(c2.d>30)
{
   c2.d-=30;
 
   c2.m++;
}
if(c2.m>12)
{
   c2.m-=12;
   c2.y++;
}

return c2;
}

struct date bsToAd(struct date c)
{
   struct date c1;
c1.y= c.y-56;
c1.m=c.m-8;
c1.d=c.d-16;

if(c1.d<1)
{
   c1.d+=30;
   c1.m--;
}
if(c1.m<1)
{
   c1.m+=12;
   c1.y--;
}

return c1;
}

int main()
{
struct date c,c1,c2;
char ch;
printf("Do you want to enter date in AD or BS (a/b) ?");
scanf("%c",&ch);

if(ch=='a' || ch=='A')
{
   printf("Enter the date (Y-M-D):");
   scanf("%d%d%d",&c.y,&c.m,&c.d);
   printf("\nIn AD:");
   display(c);
printf("AD");
c2 = adToBs(c);

printf("\nIn BS: ");
display(c2);
printf("BS");

}

if(ch=='b' || ch=='B')
{
   printf("Enter the date (Y-M-D):");
   scanf("%d%d%d",&c.y,&c.m,&c.d);
   printf("\nIn BS:");
   display(c);
printf("BS");
c1= bsToAd(c);

printf("\nIn AD:");
display(c1);
printf("AD");
}

return 0;
}
