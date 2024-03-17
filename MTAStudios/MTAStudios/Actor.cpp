#include "Actor.h"

Actor::Actor(const std::string& newNameActor, std::string newTipActor, const double newStareSpirit)
{
	this->numeActor = newNameActor;
	this->tipActor = newTipActor;
	this->stareSpirit = newStareSpirit;
}

void Actor::updateNume(const std::string& newName)
{
	this->numeActor = newName;
}

void Actor::updateStareSpirit()
{ 
	// seteaza starea de spirit a unui actor exact cum este specificat in enunt
	if(this->tipActor == "principal" && this->personaj.getTip() == "secundar")
	this->stareSpirit -= (this->stareSpirit * 0.25);

	if(this->tipActor == "secundar" && this->personaj.getTip() == "principal")
	this->stareSpirit += (this->stareSpirit * 0.25);
}

void Actor::setPersonaj(Personaj newPersonaj)
{
	this->personaj = newPersonaj;
}
