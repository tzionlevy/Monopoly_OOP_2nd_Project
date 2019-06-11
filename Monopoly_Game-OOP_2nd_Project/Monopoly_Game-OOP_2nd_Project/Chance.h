//#pragma once


#include "Slot.h"
#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new DBG_NEW
#endif
#endif // _DEBUG

class Player;
class Slot;
class Chance : public Slot
{
protected:
	string m_name;
	 string m_order; 
	 int m_amount;

public:
	// Constructor
	Chance(int size, string order, int amount);
	//	Destructor 
	~Chance();
	//Copy Constructor
	//Chance(const Chance& CC);


	string get_name() const;
	bool play(Player* p);

};

