#include <stdio.h>
#include <stdlib.h>




char buff[10];

int main()
{

    void* ptr0 = malloc(0x10);
    void* ptr1 = malloc(0x10);
    char target[] = "XXXXXXXX";


    printf("Address of target: %p\n", &target);
    printf("Address of ptr0 : %p\n", ptr0);
    printf("Address of ptr1 : %p\n", ptr1);


    printf("\n[*] Freeing both chunks.. [*]\n");
    free(ptr0);
    free(ptr1);


    printf("\n[*] Writing [*]\n");
    gets(buff);
    strcpy(ptr1, buff);
    printf("[done]\n");


    printf("\n[*] Malloc(0x10) : ptr2 [*]\n");
    void* ptr2 = malloc(0x10);


    printf("[*] Malloc(0x10) : ptr3 [*]\n\n");
    char* ptr3 = (char*)malloc(0x10);

	printf("[*] ptr3 now points to our target: %p\n", ptr3);
	printf("[*] Once again, the address of target is: %p\n", target);
    printf("[*] ptr2 : %p <--- Still points to the heap.\n[*] ptr3 : %p\n\n", ptr2, ptr3); 
    printf("[*] We're now going to copy the string \"PWNED\" to ptr3. [*]\n");
    
    strcpy(ptr3, "PWNED");

    printf("[*] We'll now print our target [*]\n");
    printf("\n[*] TARGET: %s\n\n\n", target);


	return 0;


}
