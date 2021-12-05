#include "libft.h"
#include "libftprintf.h"

int main()
{
    int i = printf("%d %d\n", 2, 4);
    int j = ft_printf("%d %d", 2, 4);

    printf("i = %d\tj = %d", i, j);
    return 0;
}