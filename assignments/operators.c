//operators
//1)arithmetic + - * / % ++ --
//2)assignment operators = += -= *= /= %=
//3)comparison operators > < >= <= == !=
//4)logical operators and(&&) or(||) not(!)
//	and true both are true
// or if anyone of them true than ans true
// not opposite of ans
//5)ternary operator short hand of if--else
#include<stdio.h>
int main()
{
	int a=10,b=10;
	//arithmetic ope
//	a++;//a=a+1;
//	printf("%d",a);
//	a--;//a=a-1
	//assignment ope
//	a*=2;
//	printf("%d",a);	
	//comparison ope
//	printf("%d",a>b);//t=1 f=0
//	printf("%d",a<b);
//	printf("%d",a>=b);
//	printf("%d",a==b);
//	printf("%d",a!=b);
	//logical operator
//	printf("%d",a>b && a==b);
//	printf("%d",a>b || a==b);
//	printf("%d",!(a==b));
//	printf("%d",!((a>b) &&(a==b));
	(a>b)?printf("yes"):printf("no");
	return 0;
}
