# include<stdio.h>
int main(void)
{
   int a[10];
   int i,j,b;
   for(i=0;i<9;i++)
	   for(j=0;j<10-i-1;j++)
		   if(a[j]<a[j+1])
		   {
		       b=a[j+1];
			   a[j+1]=a[j];
			   a[j]=b;
		   }
return 0;
}