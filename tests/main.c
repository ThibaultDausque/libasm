#include <libasm.h>

int	main(void)
{
	// strlen
	printf(" ====== FT_STRLEN.S ======\n\n");
	ft_strlen_test("hello world!");
	ft_strlen_test("toto");
	ft_strlen_test(NULL);
	ft_strlen_test("pineapple pizza");
	ft_strlen_test("do you like what you see ?");

	const char	*src = "hello world!";
	char	*dest = (char*)malloc(strlen(src) + 1);
	if (!dest)
		return 0;
	// strcpy
	printf(" ====== FT_STRCPY.S ======\n\n");
	ft_strcpy_test(dest, src);
	ft_strcpy_test(dest, src);

	// strcmp
	printf(" ====== FT_STRCMP.S ======\n\n");
	ft_strcmp_test("toto", "tata");
	ft_strcmp_test("toto", "toto");
	ft_strcmp_test("tata", "toto");

	// write
	int		w_fd = 0;
	const char	w_buf = 't';
	// size_t		w_count = strlen(w_buf);
	printf(" ====== FT_WRITE.S ======\n\n");
	ft_write_test(w_fd, &w_buf, 1);
	
	// read
	int		r_fd = 0;
	char	*r_buf = "to_read.txt";
	size_t	r_count = 42;
	printf(" ====== FT_READ.S ======\n\n");
	ft_read_test(r_fd, r_buf, r_count);

	// strdup
	// const char *s = "toto";
	// printf(" ====== FT_STRDUP.S ======\n\n");
	// ft_strdup_test(s);

	return 0;
}
