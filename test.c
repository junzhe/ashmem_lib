#include "ashmem.h"

int main(){
	char *t;
	ashmem_create_region(t, 1);
	ashmem_set_prot_region(1, 1);
	ashmem_pin_region(1, 1, 1);
	ashmem_unpin_region(1, 1, 1);
	ashmem_get_size_region(1);
}
