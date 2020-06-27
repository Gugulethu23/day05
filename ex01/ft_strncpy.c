/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnkala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:45:59 by gnkala            #+#    #+#             */
/*   Updated: 2020/06/26 15:13:42 by gnkala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while(src[i] != '\0' || i < n )
	{
     dest[i] = src[i];
	 i++;
	}
	dest[n] = '\0';
	return dest;
}

int main()
{
	char a[50] = "gugu";
	char b[50];

	ft_strncpy(b,a,2);
	printf("%s",b);
	return 0;
}


