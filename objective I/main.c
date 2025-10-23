#include<stdio.h>
#include"mylib.h"

int main(){
	int n;
	scanf("%d",&n);
    printf("isAdams(%d)=%s\n",n,isAdams(n)?"Yes":"No");
    printf("isArmstrong(%d)=%s\n",n,isArmstrong(n)?"Yes":"No");
    printf("isPrimePallindrome(%d)=%s\n",n,isPrimePallindrome(n)?"Yes":"No");
    return 0;
}