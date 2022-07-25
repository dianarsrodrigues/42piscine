/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:39:00 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/25 15:39:06 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main (void)
		const char *largestring = "Foo Bar Baz";
	   const char *smallstring = "Bar";
	   char	*ptr;

	   ptr = strstr(largestring, smallstring);
