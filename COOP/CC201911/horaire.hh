#pragma once
#include <string>

class horaire {
public:
	horaire(unsigned int m, unsigned int j, unsigned int h);
	unsigned int mois() const {return _mois;}
	//jour() const 
	//heure() const

	bool operator==(horaire const & h) const {
		//
	}
}