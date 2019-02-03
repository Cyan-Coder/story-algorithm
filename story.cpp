#include "story.h"
#include <iostream>
#include <string>
#include <cstdlib>

greekTragedy::greekTragedy() {
	this->seed = 65464;
	srand(seed);
};

void greekTragedy::createCast(int amount) {
	srand(this->seed++);
	for (int i = 0; i < amount; i++) {
		std::string name;
		int namelen = (int)((rand() % 6) + 4);

		char* letters[2] = { "bcdfghjklmnpqrstvwxyz", "aeiouy" };
		char letterlen[2] = { strlen(letters[0]), strlen(letters[1]) };

		for (int j = 0; j < namelen; j++) {
			name += letters[j % 2][rand() % letterlen[j % 2]];
		}
		name[0] = toupper(name[0]);
		//std::cout << name << "\n";
		this->cast.push_back(name);
	}
};

void greekTragedy::temp1() {
	std::string plot;
	int c1 = rand() % this->cast.size();
	int c2 = rand() % this->cast.size();
	plot += this->cast[c1] + " ";
	plot += this->actions[rand() % this->actions.size()] + " ";
	if (c1 == c2) {
		plot += "his ";
	}
	else 
	{
		plot += this->cast[c2] + "'s ";
	}
	plot += this->objects[rand() % this->objects.size()];
	std::cout << plot << ".\n";
};

void greekTragedy::temp2() {
	std::string plot;
	int c1 = rand() % this->cast.size();
	plot += this->cast[c1] + " ";
	plot += this->completedActions[rand() % this->completedActions.size()] + " ";
	plot += this->adjectives[rand() % this->adjectives.size()] + " ";
	plot += this->objects[rand() % this->objects.size()];
	std::cout << plot << ".\n";
};

void greekTragedy::createExpos() {
	std::string openingLine[2]   = {"Within the days leading up to the ending of the world", "On a beautifull day" };
	std::string characterLine[3] = { "decided that he wanted to go outside", "wanted to get to his girlfriend", "wanted to go and forge himself a new sword" };
	srand(this->seed++);
	std::cout << openingLine[rand() % 2] << " " << this->cast[rand() % 10] << " " << characterLine[rand() % 3] << ".\n";
};

void greekTragedy::createMotMom() {

};

void greekTragedy::createClimax() {

};

void greekTragedy::createResol() {

};