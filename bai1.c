#include <stdio.h>
int main(){
	int a =10;
	int b =15;
	printf("tong %d\n",a+b);
	printf("hieu %d\n",a-b);
	printf("nhan %d\n",a*b);
	printf("chia %d\n", a/b);
	printf("chia du %d\n",a%b);
	if (a>b){
	printf("so lon hon %d\n",a);
	printf("so be hon la %d\n",b);
}
	else{
			printf("so lon hon %d\n",b);
			printf("so be hon la %d\n",a);
}
	return 0;	
}
