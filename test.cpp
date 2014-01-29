#include "ashmem.h"

using namespace std;

int main(){
	char * t = "test";
	ashmem_create_region（t, 1);
}
