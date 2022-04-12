#include<stdio.h>

int size = 5;

void recurse() {
    void (*foo)(void)=&recurse; //fix uninitialized pointer
//    foo();
if(size>0)
{
	size--;
    //recursive call (implement a valid recursive check mechanism to fix null dereference)
    foo();
printf("\n Done\n");
	}
}

int main() {
    recurse();
    return 0;
}
