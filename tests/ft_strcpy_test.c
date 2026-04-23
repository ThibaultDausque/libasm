#include <libasm.h>

int	ft_strcpy_test(char *dest, const char *src)
{
	printf("_ft_strcpy asm_x64 (src: %s):  src == %s, result == %s\n", src, src, ft_strcpy(dest, src));
	printf("strcpy libC (src: %s): src == %s, result == %s\n\n", src, src, strcpy(dest, src));

	return 1;
}
