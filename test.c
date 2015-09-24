#include <stdio.h>
#include <assert.h>
#include <functions.h>

int main(int argc, char**argv)
{
	assert(insert(1 3 2)==1 2 3);
	assert(selection(5 4 2)==2 4 5);
	assert(bubble(5 8 2)==2 5 8);
	puts("All tests passed!");
}