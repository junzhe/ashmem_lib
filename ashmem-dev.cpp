#include "ashmem.h"
using namespace std;

int ashmem_create_region(const char* name, size_t size)
{
	cout<<"ashmem_create_region"<<endl;
}

int ashmem_set_prot_region(int fd, int prot)
{
	cout<<"ashmem_set_prot_region"<<endl;
}

int ashmem_pin_region(int fd, size_t offset, size_t len)
{
	cout<<"ashmem_pin_region"<<endl;
}

int ashmem_unpin_region(int fd, size_t offset, size_t len)
{
	cout<<"ashmem_unpin_region"<<endl;
}

int ashmem_get_size_region(int fd)
{
	cout<<"ashmem_get_size_region"<<endl;
}
