#include <libasm.h>

int ft_strdup_test(const char *s)
{
    if (!s)
		return 0;

	char	*dup = ft_strdup(s);
	char	*duplibc = strdup(s);
	printf("_ft_strdup asm_x64 (s: %s): result == %s\n", s, dup);
	printf("strdup libC (s: %s): result == %s\n\n", s, duplibc);

	free(dup);
	free(duplibc);
	return 1;
}