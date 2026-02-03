/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:18:05 by igngonza          #+#    #+#             */
/*   Updated: 2026/02/03 15:12:12 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY__HPP
# define ARRAY__HPP

# include <exception>

template <typename T> class Array
{
  public:
	Array();
	Array(unsigned int);
	Array(const Array &);
	Array &operator=(const Array &);
	~Array();

	const T &operator[](unsigned int) const;
	T &operator[](unsigned int);
	unsigned int size() const;

  private:
	T *data;
	unsigned int arraySize;
};

template <typename T> Array<T>::Array() : data(0), arraySize(0)
{
}

template <typename T> Array<T>::Array(unsigned int n) : arraySize(n)
{
	this->data = new T[n];
}

template <typename T> Array<T>::Array(const Array &obj) : arraySize(obj.arraySize)
{
	this->data = new T[arraySize];
	for (unsigned int i = 0; i < obj.arraySize; i++)
	{
		this->data[i] = obj.data[i];
	}
}

template <typename T> Array<T> &Array<T>::operator=(const Array &obj)
{
	T	*newData;

	if (this != &obj)
	{
		newData = new T[obj.arraySize];
		for (unsigned int i = 0; i < obj.arraySize; i++)
			newData[i] = obj.data[i];
		delete[] this->data;
		this->data = newData;
		this->arraySize = obj.arraySize;
	}
	return (*this);
}

template <typename T> const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->arraySize)
		throw std::exception();
	return (this->data[i]);
}

template <typename T> T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->arraySize)
		throw std::exception();
	return (this->data[i]);
}

template <typename T> unsigned int Array<T>::size() const
{
	return (this->arraySize);
}

template <typename T> Array<T>::~Array()
{
	delete[] this->data;
}
#endif
