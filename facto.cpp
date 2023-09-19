#include <stdio.h>
#include <stdio.h>
int main()
{
int n,i,S=1;
printf("Enter The Value Of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
S=S*i;
printf("The Factorial Of n Is");
printf("%d",S);
return 0;
}
