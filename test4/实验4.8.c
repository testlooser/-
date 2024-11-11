#include<stdio.h>

int main() {
	int alldays,weekday;
	printf("input days\n");
	scanf("%d",&alldays);
	printf("input the first week(1==fir 7==sun)\n");
	scanf("%d",&weekday);
	for(int j=1;j<weekday;j++)
		{
			printf(" \t");//保持格式 
		}
	for(int i=1; i<=alldays; i++) {
		printf("%d \t",i);//保证一致 
		if((i+weekday-1)%7==0)
		{
			printf("\n");
		 } 
		}

	return 0;
}
