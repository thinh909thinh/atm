#include<stdio.h>
#include "conio.h"
int main()
{
    int a=0,i=1,mk;
    int d;
    int r=100;
    int k;
    char ruttiep;
    do
        {  
        printf("nhap ma pin cua ban:");
        scanf("%d",&mk);
        a++;
        }
    while(mk!=i && a<3);
        if(mk==i){
             printf("pro da nhap dung mk\n");
             do
             {
             printf("nhap 1 de rut tien\n nhap2 de kiem tra tk\n");
             scanf("%d",&d);
             switch (d)
             {
             case 1:
                 printf("nhap so tien pro mun rut:");
                 scanf("%d",&k);
                 if(k<=r){
                     r-=k;
                    printf("tk con lai cua pro la:%d\n",r);
                    break;
                 }else if(k>r)
                    printf("so du khong du\n");
                 break;
            case 2:
                 printf("tk cua pro la:%d\n",r);
                 break;
            default:
                 break;
             }
            printf("lm lai k pro:");
            fflush(stdin);
            scanf("%c",&ruttiep);
             }
             while (ruttiep=='y');
         }
        else{
             printf("tk bi khoa");
         }
}