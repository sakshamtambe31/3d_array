#include<stdio.h>
#include<string.h>
int main(){
	int x[2][3],r,c;//x[row][column]
	printf("\n Enter Values In Matrix 2x3: \n");
	for(r=0;r<=1;r++){
	for(c=0;c<=2;c++){
	scanf("%d",&x[r][c]);  //x[0][0],x[0][1],x[0][2],x[1][0],x[1][1],x[1][2]	
}
}
printf("Your Array\n");
for(r=0;r<=1;r++){
	for(c=0;c<=2;c++){
		printf("%d\t",x[r][c]);	
}
printf("\n");
}
}

