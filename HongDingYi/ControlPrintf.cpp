#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <algorithm>
#include <cctype>
#include <unistd.h>
#include <string.h>

#define _DEBUG_

#ifdef _DEBUG_
#define DEBUG(format,...) printf(" "format" \n", ##_VA_ARGS_)
#else
#define DEBUG(format,...)
#endif

int main() 
{
	char str[]="Hello Wrold!";
	DEBUG("I Say : %s \n",str);
	int avg=90,percent=100;
	DEBUG("The Times : %d %d \n",avg,percent);
	return 0;
}
