#pragma once

template <typename T, typename U>
class Pair
{
private:
	T fst;
	U snd;
public:
	Pair(T f, U s);
	T first() const;
	U second() const;
};

template <typename T, typename U>
Pair<T, U>::Pair(T f, U s) : fst(f), snd(s)
{
}

template <typename T, typename U>
T Pair<T, U>::first() const
{
	return T(fst);
}

template <typename T, typename U>
U Pair<T, U>::second() const
{
	return U(snd);
}
