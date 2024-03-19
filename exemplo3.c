#include <stdio.h>

void UnreachableFunction()
{ 
	printf("This shouldn't be executed!");
 	exit(0);
} 

void ReadInput() 
{ 
    char buffer[8]; gets(buffer); 
    puts(buffer); 
} 
int main() { 
    ReadInput(); 
    return 0; 
}