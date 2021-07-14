#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(const string& n) : m_name(n)
{
}

bool GenericPlayer::IsBoosted() const
{
	return (GetTotal() > 21);
}

void GenericPlayer::Bust() const
{
	if (IsBoosted())
		cout << m_name << " busts." << endl;
}
