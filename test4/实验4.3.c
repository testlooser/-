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
//	} while(m!=0); //�ж�ӵ�м�λ��,�Ա��ں����ж�
//	for(int i=1; i<count; i++) {
//		rev=rev*10;//��ǰ��*10��λ
//		temp=a%10;//��ȡ���һλ��
//		rev=rev+temp;//������Сλ��
//		a=a/10;//ȥ�����һλ����λ
//		all+=temp;//�Լ� ��ֵ
//	}
//	printf("��λ���ĺ�Ϊ %d\n",all);
//	printf("��ת����λ %d",rev);
//	return 0;
//}
