#include <stdio.h>
#include <stdlib.h>
void fibonacci(long int sayi,long int x,long int y){
    if(sayi>0){
       printf("%ld,",x);
       x=x+y;
       sayi--;
    }
    if(sayi>0){
        printf("%ld,",y);
        y=x+y;
        sayi--;

    }
    if(sayi>0)
        fibonacci(sayi,x,y);



}

int main()
{
    long int x,y,sayi;
    x=1;
    y=x;
    printf("Bir sayi Giriniz:");
    scanf("%d",&sayi);
    fibonacci(sayi,x,y);



}
