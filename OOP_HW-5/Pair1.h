#pragma once

template <typename T>
class Pair1
{
private:
	T fst;
	T snd;
public:
	Pair1(T f, T s);
	T first() const;
	T second() const;
};

template<typename T>
Pair1<T>::Pair1(T f, T s) : fst(f), snd(s)
{
}

template<typename T>
T Pair1<T>::first() const
{
	return T(fst);
}

template<typename T>
T Pair1<T>::second() const
{
	return T(snd);
}
