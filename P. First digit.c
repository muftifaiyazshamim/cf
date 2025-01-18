#include<stdio.h>
int  main (){
int a,y;
scanf("%d",&a);
y=a/1000;
if (y%2==0){
    printf("EVEN");
}
else{
    printf("ODD");
}
return 0;
}
