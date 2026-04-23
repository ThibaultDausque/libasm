#include <libasm.h>

int	ft_strlen_test(const char *s)
{
	size_t	len_asm = ft_strlen(s);
	size_t	len_c = strlen(s);

	if (!len_asm || !len_c)
	{
		printf("strlen need a string (const char*)");
		return 0;
	}

	printf("_ft_strlen asm_x64 (%s): %zu\n",s ,len_asm);
	printf("strlen C (%s): %zu\n\n", s, len_c);
	return 1;
}