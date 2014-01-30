#include "ashmem.h"
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int ashmem_create_region(const char* name, size_t size)
{
	printf("%s\n", "ashmem_create_region");
}

int ashmem_set_prot_region(int fd, int prot)
{
	printf("%s\n", "ashmem_set_prot_region");
}

int ashmem_pin_region(int fd, size_t offset, size_t len)
{
	printf("%s\n", "ashmem_pin_region");
}

int ashmem_unpin_region(int fd, size_t offset, size_t len)
{
	printf("%s\n", "ashmem_unpin_region");
}

int ashmem_get_size_region(int fd)
{
	printf("%s\n", "ashmem_get_size_region");
}
