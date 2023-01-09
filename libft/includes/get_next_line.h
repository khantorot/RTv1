#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 5
# define OPEN_MAX 10240

static	void	ft_new_data(char **old_buff, char *tmp, char *buff);
static int		ft_data_checker(char **old_buff, char **line);
static int		ft_buffer(int fd, char **old_buff, char **line);
int				get_next_line(const int fd, char **line);

#endif
