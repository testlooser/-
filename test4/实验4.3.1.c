	for(int i=1; i<=count; i++) {
		rev=rev*10;//��ǰ��*10��λ
		temp=a%10;//��ȡ���һλ��
		rev=rev+temp;//������Сλ��
		a=a/10;//ȥ�����һλ����λ
		all+=temp;//�Լ� ��ֵ
	}
	printf("��λ���ĺ�Ϊ %d\n",all);
	printf("��ת����λ %d",rev);
	return 0;
