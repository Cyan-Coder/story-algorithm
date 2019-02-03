#include "story.h"
#include <iostream>
#include <string>

plot::plot() {
	this->seed = 0;
	srand(seed);
};

void plot::createSentance(Template T) {
	std::string plot;
	for (int i = 0; i < T.Temp.size(); i++) {
		switch(T.Temp[i]){
		case ACTION				: plot += this->actions[rand() % this->actions.size()] + " "; break;
		case COMPLETED_ACTION	: plot += this->completedActions[rand() % this->completedActions.size()] + " "; break;
		case CHARACTER			: plot += this->cast[rand() % this->cast.size()] + " "; break;
		case CHARACTER_POSSESIVE: plot += this->cast[rand() % this->cast.size()] + "'s "; break;
		case OBJECT				: plot += this->objects[rand() % this->objects.size()] + " "; break;
		case ADJECTIVE			: plot += this->adjectives[rand() % this->adjectives.size()] + " "; break;
		//case LOCATION			: plot += ; break;
		default					: plot += "oopsy "; break;
		}
	}
	std::cout << plot << "\n";
};


void plot::createCast(int amount) {
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
		this->cast.push_back(name);
		std::cout << name << "\n";
	}
};

/*void plot::temp1() {
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
	plot += this->objects[rand() % this->objects.size()] + ".";
	std::cout << plot << "\n";
};

void plot::temp2() {
	std::string plot;
	int c1 = rand() % this->cast.size();
	plot += this->cast[c1] + " ";
	plot += this->completedActions[rand() % this->completedActions.size()] + " ";
	plot += this->adjectives[rand() % this->adjectives.size()] + " ";
	plot += this->objects[rand() % this->objects.size()] + ".";
	std::cout << plot << "\n";
};*/

Template::Template(std::vector<templateElem> T) {
	this->Temp = T;
};
