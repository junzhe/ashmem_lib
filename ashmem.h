#ifndef _CUTILS_ASHMEM_H
#define _CUTILS_ASHMEM_H

#include <machine/limits.h>
#include <unistd.h>

int ashmem_create_region(const char* name, size_t size);
int ashmem_set_prot_region(int fd, int prot);
int ashmem_pin_region(int fd, size_t offset, size_t len);
int ashmem_unpin_region(int fd, size_t offset, size_t len);
int ashmem_get_size_region(int fd);

#endif /* _CUTILS_ASHMEM_H */
