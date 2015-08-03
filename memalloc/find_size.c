#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <unistd.h>

/* size field is or'ed with PREV_INUSE when previous adjacent chunk in use */
#define PREV_INUSE 0x1
/* size field is or'ed with IS_MMAPPED if the chunk was obtained with mmap() */
#define IS_MMAPPED 0x2
/* size field is or'ed with NON_MAIN_ARENA if the chunk was obtained
   from a non-main arena.  This is only set immediately before handing
   the chunk to the user, if necessary.  */
#define NON_MAIN_ARENA 0x4


#define SIZE_BITS (PREV_INUSE|IS_MMAPPED|NON_MAIN_ARENA)

#define mem2chunk(mem) 	((mchunkptr)((char*)(mem) - 2*sizeof(size_t)))

#define chunksize(p)         ((p)->size & ~(SIZE_BITS))


struct malloc_chunk {

  size_t      prev_size;  /* Size of previous chunk (if free).  */
  size_t      size;       /* Size in bytes, including overhead. */

  struct malloc_chunk* fd;         /* double links -- used only if free. */
  struct malloc_chunk* bk;

  /* Only used for large blocks: pointer to next larger size.  */
  struct malloc_chunk* fd_nextsize; /* double links -- used only if free. */
  struct malloc_chunk* bk_nextsize;
};

typedef struct malloc_chunk* mchunkptr;

int main()
{
	int size;
	void *ptr;
	struct malloc_chunk* p;
	
	ptr = malloc(2);
	p = mem2chunk(ptr);
	size = chunksize(p);

	printf("\n");
	printf("\n %d \n",size);
}
