#include <libasm.h>

int ft_strdup_test(const char *s)
{
	char	*dup = ft_strdup(s);
	char	*duplibc = strdup(s);
	printf("_ft_strdup asm_x64 (s: %s): result == %s\n", s, dup);
	printf("strdup libC (s: %s): result == %s\n\n", s, duplibc);
	printf("errno %d\n", errno);
	free(dup);
	free(duplibc);
	return 1;
}