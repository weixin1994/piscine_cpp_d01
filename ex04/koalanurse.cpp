#include <iostream>
#include <fstream>
#include "koalanurse.h"

KoalaNurse::KoalaNurse(int id)
{
	ID = id;
	this->working = false;
}

KoalaNurse::~KoalaNurse(void)
{
	std::cout << "Nurse " << ID << ":  Enfin un peu de repos !" << std::endl;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala *patient)
{
	patient->takeDrug(drug);
}

std::string	KoalaNurse::readReport(std::string file)
{
	std::ifstream myStream(file.c_str());
	std::string	drug("");
	std::string	patientName;

	if(myStream)
	{
		patientName = file.substr(0, file.rfind(".report"));
		getline(myStream, drug);
		std::cout << "Nurse " << this->ID << ": Kreog ! Il faut donner un " << drug << " a Mr." << patientName << " !" << std::endl;
	}
	return drug;
}

void KoalaNurse::timeCheck()
{
	working = !working;
	if(working)
		std::cout << "Nurse " << this->ID << ": Je commence le travail !" << std::endl;
	else
		std::cout << "Nurse " << this->ID << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
}

