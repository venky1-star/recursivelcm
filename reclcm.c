#include<stdio.h>
int reclcm(int,int);
main()
{
	int n1,n2;
	printf("Input first number : ");
	scanf("%d",&n1);
	printf("\nInput second number : ");
	scanf("%d",&n2);
	printf("LCM of %d and %d = %d",n1,n2,reclcm(n1,n2));
}
int reclcm(n1,n2)
{
	static int i=1;
	i++;
 if(i%n1==0&&i%n2==0)
 return i;
 else if(i<=n1*n2)
 return reclcm(n1,n2);
}
