#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
 char a[300];
 scanf("%s",&a);
int l,i;
l=strlen(a);
for(i=1;i<l-1;i++)
{
    printf("%c",a[i]);
}

}
