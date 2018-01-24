/* 
Function:
		the diffirence between array and pointer 
@Author : QuinnChuh
Date : 2018-1-21
 */
 
 #include <stdio.h>
 
 int main()
 {
	 int s[3][2] = {{2, 1}, {5, 6}, {7, 9}};
	 int *p,i,j;
	 //第一种方法：
	 //前三个是真实值，第四个是地址
	 //以一维数组的取址来访问
	 //printf("%d %d %d %d\n", s[2][1], *(s[2] + 1), *(*(s + 2) + 1) , *(s + 2) + 1);
	 
	 //第二种方法：
	 //以数组下标的方式来取址访问
	 p = &s[0][0];
	 for(i = 0; i < 3; i++)
	 {
		 for(j = 0; j < 2; j++)
		 {
			 printf("%d", *(p + 2*i +j));
			 printf(" ");
		 }
		 printf("\n");
	 }
	 
	 return 0;
 }