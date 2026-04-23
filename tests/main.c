#include <libasm.h>
#include <errno.h>

int	main(void)
{
	// strlen
	printf(" ====== FT_STRLEN.S ======\n\n");
	ft_strlen_test("hello world!");
	ft_strlen_test("toto");
	ft_strlen_test("");
	// ft_strlen_test(NULL);
	ft_strlen_test("pineapple pizza");
	ft_strlen_test("do you like what you see ?");
	ft_strlen_test("do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?do you like what you see ?");

	const char	*src = "hello world!";
	const char	*src2 = "Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!VJe t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!Je t'en supplie, strcpy moi !!!";
	const char 	*src3 = "Si tu mets faux a ce projet je te retrouve";
	char	*dest = (char*)malloc(strlen(src) + 1);
	char	*dest2 = (char*)malloc(strlen(src2) + 1);
	char	*dest3 = (char*)malloc(strlen(src3) + 1);
	if (!dest || !dest2 || !dest3)
		return 0;
	// strcpy
	printf(" ====== FT_STRCPY.S ======\n\n");
	ft_strcpy_test(dest, src);
	ft_strcpy_test(dest2, src2);
	ft_strcpy_test(dest3, src3);

	// strcmp
	printf(" ====== FT_STRCMP.S ======\n\n");
	ft_strcmp_test("", "");
	ft_strcmp_test("", "tata");
	ft_strcmp_test("toto", "");
	ft_strcmp_test("toto", "tata");
	ft_strcmp_test("toto", "toto");
	ft_strcmp_test("tata", "rien a foot");

	// write
	int		w_fd = 1;
	//int		w_fd = open("write.txt", O_WRONLY);
	const char	w_buf = 't';
	const char	*w_buf2 = "wadup bro ?";
	// size_t		w_count = strlen(w_buf);
	printf(" ====== FT_WRITE.S ======\n\n");
	ft_write_test(w_fd, &w_buf, 1);
	ft_write_test(w_fd, w_buf2, 3);
	ft_write_test(-1, w_buf2, 3);
	
	// read
	char	*title = "to_read.txt";
	size_t	r_count = 5;
	int		r_fd = open(title, O_RDONLY);
	char	*buf = malloc(42);
	if (!buf)
		exit(1);
	if (!r_fd)
	{
		printf("Error: can't open the .txt file");
		exit(1);
	}
	printf(" ====== FT_READ.S ======\n\n");
	int		b = ft_read_test(r_fd, buf, r_count);
	buf[b] = '\0';
	
	// strdup
	const char *s1 = "";
	const char *s2 = "t'es vraiment un mec trop trop cool et t'es trop beau";
	const char *s3 = "gougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougagagougougaga";
	printf(" ====== FT_STRDUP.S ======\n\n");
	ft_strdup_test(s1);
	ft_strdup_test(s2);
	ft_strdup_test(s3);
	
	free(buf);
	free(dest);
	free(dest2);
	free(dest3);
	close(r_fd);
	return 0;
}

