#pragma once

#include <vector>
enum templateElem {
	ACTION,
	COMPLETED_ACTION,
	CHARACTER,
	CHARACTER_POSSESIVE,
	OBJECT,
	ADJECTIVE,
	LOCATION
};

struct Template {
	Template(std::vector<templateElem> T);
	std::vector<templateElem> Temp;
};


struct plot {
	unsigned int seed;
	plot();

	std::vector<std::string> cast;

	std::vector<templateElem> temp1 = { CHARACTER, ACTION, CHARACTER_POSSESIVE, OBJECT };
	std::vector<templateElem> temp2 = { CHARACTER, COMPLETED_ACTION, ADJECTIVE, OBJECT };
	Template t1{ temp1 };
	Template t2{ temp2 };

	void createSentance(Template T);
	void createCast(int amount);

	std::vector<std::string> actions =			{"sold", "broke", "lost", "searched for", "repaired"};
	std::vector<std::string> objects =			{"necklace", "book", "sword", "hat", "ring"};
	std::vector<std::string> adjectives =		{ "a blue", "an old", "a strange", "a possessed", "a dirty"};
	std::vector<std::string> completedActions = { "has stolen", "has bought", "has found", "has discovered", "has looked at" };
	/*void temp1();
	void temp2();
	*/
};
