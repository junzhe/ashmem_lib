#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <minix/vm.h>
#include <minix/type.h>
#include <sys/ioc_ashmem.h>
#include <sys/ashmem.h>

int main(){
	char dum[] = "test";

	int id;
	char * addr;

	id = ashmem_create_region(dum, 40960);

	printf("id test %d\n", id);

	addr = (char *) ashmem_mmap(NULL, 10, 0, 0, id, 0);

	*addr = 'c';

	printf("%c\n", *addr);

	return 0;
}
