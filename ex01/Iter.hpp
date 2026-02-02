/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:13:27 by igngonza          #+#    #+#             */
/*   Updated: 2026/01/30 11:24:05 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T> void iter(T *array, const int length, void (*func)(T &)) {

  for (int i = 0; i < length; i++) {
    func(array[i]);
  }
}
template <typename T>
void iter(const T *array, const int length, void (*func)(const T &)) {
  for (int i = 0; i < length; i++) {
    func(array[i]);
  }
}

#endif
