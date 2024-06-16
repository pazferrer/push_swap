/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:52:09 by pferrer-          #+#    #+#             */
/*   Updated: 2024/06/16 13:23:36 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	**ft_split(char *str, char separator)
{
	int	words_numbers;
	char	**vector_strings;
	int	i;

	i = 0;
	words_numbers = count_words(str, separator);
	vector_strings = malloc(sizeof(char *) * ( words_number = 2);
}

static int count_words(char *str, char separator)
{
	int	count;
	bool	inside_word;

	count = 0;
	while (*str)
	{
		inside_word = false;
		while (*str == separator)
			++str;
		while (*str != separator && *str)
		{
			if (!inside_word) //solo se inicializa si inside word es falso
			{
				++count;
				inside_word = true;
			}
			++str;
		}
	}
	return (count);
}
