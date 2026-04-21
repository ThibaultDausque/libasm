#include <libasm.h>

int ft_write_test(int fd, const void *buf, size_t count)
{
    if (!buf || count <= 0 || fd < 0)
		return 0;

	printf("_ft_write asm_x64 (fd: %d, buf: %p, count: %zu): result == %zu\n", fd, buf, count, ft_write(fd, buf, count));
	printf("write libC (fd: %d, buf: %p, count: %zu): result == %zu\n\n", fd, buf, count, write(fd, buf, count));

	return 1;
}