#ifndef KOALANURSE_H
#define KOALANURSE_H
#include "sickkoala.h"
class KoalaNurse
{
	public:
		KoalaNurse(int ID);
		~KoalaNurse();
		void giveDrug(std::string drug,SickKoala *patient);
		std::string readReport(std::string file);
		void timeCheck();
	private:
		int ID;	
		bool working;
};
#endif
