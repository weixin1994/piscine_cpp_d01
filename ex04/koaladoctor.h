#ifndef KOALADOCTOR_H
# define KOALADOCTOR_H

#include <iostream>
#include "sickkoala.h"

class KoalaDoctor
{
	public:
		KoalaDoctor(std::string name);
		~KoalaDoctor();
		void diagnose(SickKoala *patient);
		void timeCheck();
  
	private:
		std::string	name;
		bool working;
};

#endif
