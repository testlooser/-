//#include <stdio.h>
//
//int GCD(int a,int b);
//int main() {
//	int up,down,gcd;
//	printf("Enter m/n\n");
//	scanf("%d/%d",&up,&down);
//	if(down==0)
//	{
//		printf("error");
//		return 1; 
//	 } 
//	gcd=GCD(up,down);
//	up=up/gcd;//��ĸԼ��
//	down=down/gcd;//��ĸԼ��
//	if(down==1)
//	{
//		printf("get %d",up);
//	} 
//	else
//	{printf("get %d/%d",up,down);
//	}
//
//
//}
//int GCD(int a,int b) {
//	int k,temp;
//	while(a%b!=0) {
//		k=a%b;
//		temp=a;
//		a=b;
//		b=k;
//	}//շת�����
//	return b;
//}//�������Լ��
