//2D  arrays 
#include<stdio.h>
main(){
int i;
int j;
int marks [2][7]={{10,24,35,45,75,80,87},{15,20,30,45,54,64,90}};
for(i=0;i<2;i++){
for(j=0;j<7;j++){
printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
}
}
return 0;
}