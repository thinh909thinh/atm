#include<stdio.h>
#include "conio.h"
int main()
{
    int a,s,sl;
    s=0;
    char c;
    
    do
    {   
        printf("1 ca phe 20k\n 2 nc ngot 10k\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            printf("nhap so luong\n");
            scanf("%d",&sl);
            s+=sl*20;
            printf("cua pro het %d\n",s);
            break;
        case 2:
            printf("nhap so luong ");
            scanf("%d",&sl);
            s+=sl*10;
            printf("cua pro het %d\n",s);
            break;
        
        default:
            break;
        }
        printf("con khat k pro\nnhap y de goi tiep\n");
        fflush(stdin);
        scanf("%c",&c);

    } while (c=='y');
    printf("het%d",s);
    
}