#include<stdio.h>
struct person {
char name[40] ;
int age;
};
void MyFunc (struct person *ps, int n) ;
int main()
{
struct person team[5] ;
FILE *fp;
int i;
fp=fopen("D:\\input.txt", "r") ;
if(fp==NULL) return 1;
for(i=0; i<5; i++)
fscanf(fp,"%s%d",team[i].name,&(team[i].age)) ;
fclose(fp) ;
MyFunc (team,5);
for(i=0; i<5; i++)
printf("%s %d\n", team[i].name,team[i].age) ;
return 0;
}
void MyFunc (struct person *ps, int n)
{
int i, j, k;
struct person t;
for(i=0;i<n-1;i++)
{
k=i;
for(j=i+1; j<n; j++)
if(ps[j].age>ps[k].age) k=j;
t=ps[i];ps[i]=ps[k];ps[k]=t;
}
return;
}