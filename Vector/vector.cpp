
#include "vector.h"


template<class T>
Vector< T >::Vector(int size)
{
	this->v = (T *) malloc(sizeof(T)*size);
}

template<class T>
Vector<T>::~Vector()
{


}

void TemporaryFunction ()
{
    Vector<int> v(3);
}
