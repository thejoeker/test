/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <julrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:04:48 by julrober          #+#    #+#             */
/*   Updated: 2023/01/15 15:06:34 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(const char *s)
{
    size_t  i = 0;
    while(s && s[i])
    i++;
    return(i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int j;
    size_t len;

    if(s1)
    len = ft_strlen(s1);
    if(s2)
    len = ft_strlen(s1) + ft_strlen(s2);
    str = malloc(sizeof(char) * (len +1));
    if (!str)
    return(NULL);
    len = 0;
    while (s1 && s1[len])
    {
        str[len] = s1[len];
        len++;
    }
    j = -1;
    while (s2 && s2[++j])
    str[len++] = s2[j];
    str[len] = '\0';
      return(str);

}

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if(*s == (char)c)
        return((char *)s);
        s++;
    }
    if(!*s && !c)
        return((char *)s);
        return (NULL);
}