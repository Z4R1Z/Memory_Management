#include <stdbool.h>

int sbmem_init(int segmentsize); 
int sbmem_remove(); 
int sbmem_open(); 
void *sbmem_alloc (int size);
void sbmem_free(void *p);
int sbmem_close(); 
//void sbmem_calc_frag();