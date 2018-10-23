#ifndef FT_MEM_H
#define FT_MEM_H

# include "../../libft.h"

void				ft_charswap(char *a, char *b);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_recalloc(void *ptr, size_t src_size, size_t new_size);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

#endif