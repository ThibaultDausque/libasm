#include <libasm.h>

int ft_strcmp_test(const char *s1, const char *s2)
{
	printf("_ft_strcmp asm_x64 (s1: %s, s2: %s): result == %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("strcmp libC (s1: %s, s2: %s): result == %d\n\n", s1, s2, strcmp(s1, s2));

	return 1;
}