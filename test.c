#include <stdio.h>

int main(void){

    int n;

    printf("����: ");
    scanf("%d",&n);

    if(n>0)
        printf("����Դϴ�.\n");
    else if(n<0)
        printf("�����Դϴ�. \n");
    else
        printf("0�Դϴ�. \n");

}