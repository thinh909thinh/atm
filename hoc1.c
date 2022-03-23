#include<stdio.h>
#include "conio.h"
int main()
{
    int a=0,i=1,s;
    int d;
    int r=100;
    int k;
    do
        {  
            printf("nhap ma pin cua ban:");
            scanf("%d",&s);
            a++;
        }
     while(s!=i && a<3);
    //  vòng lặp sẽ tiếp tục khi 1 trong 2 điều kiện trên sai
         if(s==1){
             printf("nhap 1 de rut tien\n nhap2 de kiem tra tk\n");
             scanf("%d",&d);
             switch (d)
             {
             case 1:
                 printf("nhap so tien mun rut:");
                 scanf("%d",&k);
                 if(k<=r){
                     r-=k;
                        printf("tk cua b la:%d",r);
                 }
                 break;
            case 2:
                 r-=k;
                 printf("tk cua b la:%d",r);
                 break;
            default:
                 break;
             }
         }
         else{
             printf("tk bi khóa");
         }
}