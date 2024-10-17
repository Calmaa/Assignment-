//3D  arrays 
#include<stdio.h>
main(){
int i,j,k;
int marks[2][2][3]={{{34,45,67},{20,39,48}},{{20,30,60},{10,30,25}}};
for(i=0;i<2;i++){
for(j=0;j<2;j++){
for(k=0;k<3;k++){
printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);}}
}
return 0;
}