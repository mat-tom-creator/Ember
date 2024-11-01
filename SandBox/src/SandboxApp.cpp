#include "Ember.h"

class SandBox : public Ember :: Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

Ember::Application* Ember::CreateApplication() 
{
	return new SandBox();
}