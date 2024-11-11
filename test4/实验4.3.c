//#include<stdio.h>
//
//int main() {
//	int a,n,m,count=0;
//	int temp=0;
//	int all=0;
//	int rev=0;
//	scanf("%d",&a);
//	m=a;
//	do {
//		m=m/10;
//		count++;
//	} while(m!=0); //判断拥有几位数,以便于后续判断
//	for(int i=1; i<count; i++) {
//		rev=rev*10;//当前数*10升位
//		temp=a%10;//获取最后一位数
//		rev=rev+temp;//存入最小位数
//		a=a/10;//去除最后一位，降位
//		all+=temp;//自加 存值
//	}
//	printf("各位数的和为 %d\n",all);
//	printf("反转后数位 %d",rev);
//	return 0;
//}
