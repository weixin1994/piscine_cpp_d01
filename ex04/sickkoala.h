#ifndef SICKKOALA_H
#define SICKKOALA_H
class SickKoala
{
	public:
		SickKoala(std::string name);
		~SickKoala();
		void poke();
		bool takeDrug(std::string str);
		void overDrive(std::string str);
		std::string	getName();
	private:
		std::string name;
};
#endif
