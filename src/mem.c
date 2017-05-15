#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct MEM_MATRIX
{
    int     dimension;
    void   *cell[1];        // Actual length set during memory allocation.
} MEM_MATRIX;


/*
*   Purpose:    Allocate a square 2D matrix.
*
*               Must free the matrix using mem_free_square_matrix().
*
*   Note:       Stores the dimension of the matrix *before* the returned
*               pointer!
*/
void *mem_alloc_square_matrix
(
    size_t dimension,           // Number of rows and columns.
    size_t sizeof_cell_type
)
{
    int   i;

    // Allocate sufficient memory for dimension and pointers.
    MEM_MATRIX *result = malloc(offsetof(MEM_MATRIX, cell) +
                                (dimension * sizeof(void *)));

    result->dimension = dimension;

    for (i = 0; i < dimension; ++i)
    {
        result->cell[i] = calloc(dimension, sizeof_cell_type);
    }

    // Hide the dimension.
    result = ((char *) result) + offsetof(MEM_MATRIX, cell);

    return result;
}


/*
*   Purpose:    Free a matrix that was allocated with mem_alloc_square_matrix().
*
*   Implementation note:    Stores the dimension of the matrix *before*
*                           the provided pointer.
*/
void mem_free_square_matrix
(
    void *p     // Pointer from mem_alloc_square_matrix().
)
{
    int i;

    // Expose the dimension.
    p = ((char *) p) - offsetof(MEM_MATRIX, cell);

    for (i = 0; i < p->dimension; ++i)
    {
        free(((void **) p)[i]);
    }

    free(p);
}


int main(int argc, char **argv)
{
    char **a = mem_alloc_square_matrix(4, sizeof(long));

    printf("%p\n", a);
    printf("%p\n", a[0]);
    printf("%p\n", a[1]);
    printf("%p\n", a[2]);
    printf("%p\n", a[3]);

    mem_free_square_matrix(a);

    return 0;
}
