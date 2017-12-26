#include<stdio.h>
#include<string.h>
int main(void)
{	
  char temp;
	char a[10];
	int i,b;
	printf("straing= ");
	scanf("%s",a);
	b=strlen(a);
	printf("SIZE=%d",b);
	  if(b%2==0)
	  {
		for(i=0;i<b;i+=2)
		{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		}
		printf("\n%s",a);
	  }	
	else
	{
		for(i=0;i<b-1;i+=2)
		{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		}
	printf("\n%s",a);
	}
}
