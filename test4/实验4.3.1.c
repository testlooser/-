	for(int i=1; i<=count; i++) {
		rev=rev*10;//当前数*10升位
		temp=a%10;//获取最后一位数
		rev=rev+temp;//存入最小位数
		a=a/10;//去除最后一位，降位
		all+=temp;//自加 存值
	}
	printf("各位数的和为 %d\n",all);
	printf("反转后数位 %d",rev);
	return 0;
