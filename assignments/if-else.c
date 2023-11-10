//total 32 keywords in c language
#include<stdio.h>
int main()
{
	int a=10,b=10;
	//simple if
//	if(a>b)
//	{
//		printf("yes");
//	}
	
	//if--else
//	if(a>b)
//	{
//		printf("a is big");
//	}
//	else{
//		printf("b is big");
//	}

	//nested if
//	if(a>=b)//equal greater
//	{
//		if(a==b)
//		{
//			printf("equal");
//		}
//		else{
//			printf("a is big");
//		}
//	}
//	else{
//		
//		printf("b is big");
//	}
	
	//ladder else--if
	if(a>b)
	{
		printf("a is big");
	}
	else if( a==b)
	{
		printf(" equal");
	}
	else {
		printf("b is big");
	}
	return 0;
}
