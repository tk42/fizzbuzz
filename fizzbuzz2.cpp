#include<stdio.h>
int main(void){
	int i=1;
	while(i<=100){
		switch(i%15){
			case 0: printf("FizzBuzz\n");break;
			case 3:
			case 6:
			case 9:
			case 12: printf("Fizz\n");break;
			case 5:
			case 10: printf("Buzz\n");break;
			default: printf("%d\n",i);
		}
		i++;
	}
	return 0;
}