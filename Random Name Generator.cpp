// Challenge #1 - Random Name Generator
// By Jake R. using Visual Studio and my penis

#include "stdafx.h"
#include <string>
#include <iostream>
#include <ctime>

int main()
{
	// Declaring restart y/n
	std::string restartGenerator;

	// Declaring each array and acquiring a seperate random number for each one because I am retarded and 
	// can't figure a good way to just reroll the fucking thing whatever this'll do

	std::string fNamesArray[6] = { "John", "Fred", "Tyson", "Snoop", "Larry", "Jacob" };
	srand(time(0));
	int fNamesRand = rand();
	int fNamesNumb = (fNamesRand % 6) + 1;

	std::string lNamesArray[6] = { "Jackson", "Dogg", "Frederikson", "Burns", "Haley", "Aturken" };
	srand(time(0));
	int lNamesRand = rand();
	int lNamesNumb = (lNamesRand % 6) + 1;

	std::string addrNamesArray[4] = { "123 Fake St, North Exampleton", "189 Not Real Rd, Ghostville", "94 Siegfried Cr, Townsville", "12 John Crt, Jackstown" };
	srand(time(0));
	int addrNamesRand = rand();
	int addrNamesNumb = (addrNamesRand % 4) + 1;

	std::string emailNamesArray[4] = { "xbox1sg4y@example.com", "urmom4life@example.com", "omgwtfbbq@example.com", "siegfriedandroy@example.com" };
	srand(time(0));
	int emailNamesRand = rand();
	int emailNamesNumb = (emailNamesRand % 4) + 1;

	int phNumbersArray[6] = { 52794613, 57784456, 58786163, 57648797, 57412242, 55484545 };
	srand(time(0));
	int phNumbRand = rand();
	int phNumbNumb = (phNumbRand % 6) + 1;

	std::string firstName = fNamesArray[fNamesNumb];
	std::string lastName = lNamesArray[lNamesNumb];
	std::string addressName = addrNamesArray[addrNamesNumb];
	std::string emailName = emailNamesArray[emailNamesNumb];
	int phoneNum = phNumbersArray[phNumbNumb];

	// Outputting details generated

	std::cout << "Welcome to the Random Name Generator\n\n";
	std::cout << "Your generated details are as follows -\n";
	std::cout << "NAME: " << firstName << " " << lastName << "\n";
	std::cout << "ADDRESS: " << addressName << "\n";
	std::cout << "EMAIL: " << emailName << "\n";
	std::cout << "PHONE: " << phoneNum << "\n";

	// Asking user if they wish to generate more details

	std::cout << "\nWould you like to generate another name? Y/N: ";
	std::cin >> restartGenerator;
	std::cin.ignore();

	// Checking user response to determine whether or not to restart
	while (true)
	{
		if (restartGenerator == "y" || restartGenerator == "Y" || restartGenerator == "n" || restartGenerator == "N")
		{
			if (restartGenerator == "Y" || restartGenerator == "y")
			{
				main();
			}
			if (restartGenerator == "N" || restartGenerator == "n")
			{
				std::cout << "\nThank-you!\n";
			}
		}
		else
		{
			std::cout << "\nPlease enter Y/N!\n";
		}

		break;
	}
	

    return 0;
}

