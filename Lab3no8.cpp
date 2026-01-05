#include<stdio.h>

main(){
	int h,m,s,nm;
	scanf("%d:%d:%d:",&h,&m,&s);
	printf("hour:%d\nminute:%d\nsecond:%d\n",h,m,s);
	printf("Next minutes:");
	scanf("%d",&nm);
	
	m= m+nm;
	h = h+ (m/60);
	int mm = m%60;
	
	h = h % 24;
	printf("hour:%d\n",h);
	printf("minute:%d\n",mm);
	printf("second:%d\n",s);
}
