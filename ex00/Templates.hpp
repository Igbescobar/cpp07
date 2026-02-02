/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:11:43 by igngonza          #+#    #+#             */
/*   Updated: 2026/01/30 11:11:46 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES__HPP
#define TEMPLATES__HPP

template <typename T> void swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T> T min(const T &a, const T &b) { return (a < b ? a : b); }

template <typename T> T max(const T &a, const T &b) { return (a > b ? a : b); }

#endif
