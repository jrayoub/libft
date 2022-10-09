#include "../libft.h"

/**
 * @brief Outputs the character ’c’ to the given file
descriptor.
 *
 * @param c The character to output.
 * @param fd  The file descriptor on which to write.
 * @return None
 *
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
