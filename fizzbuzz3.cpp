#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0; i < 32; ++i)
	{
		printf("%d",[](int x){ return(x%3); });
/*
		switch(i){
			case [](int x){ return(x%3); }(): printf("Fizz\n");
			case [](int x){ return(x%5); }(): printf("Buzz\n");
			default: printf("%d\n",i);
		}
*/
	}
    return EXIT_SUCCESS;
}

