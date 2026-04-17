#include <libasm.h>

int	main(void)
{
	printf(" ====== FT_STRLEN.S ======\n\n");
	ft_strlen_test("hello world!");
	ft_strlen_test("toto");
	ft_strlen_test(NULL);
	ft_strlen_test("pineapple pizza");
	ft_strlen_test("do you like what you see ?");

	char	*src = "hello world";
	char	*dest = (char*)malloc(strlen(src) + 1);
	if (!dest)
		return 0;
	printf(" ====== FT_STRCPY.S ======\n\n");
	ft_strcpy_test(dest, src);
	ft_strcpy_test(dest, src);

	return 0;
}
