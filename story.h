#pragma once

#include <vector>

struct plot {
	unsigned int seed;
	plot();
	
	std::vector<std::string> cast;


	void createCast(int amount);

	std::vector<std::string> actions =			{"sold", "broke", "lost", "searched for", "repaired"};
	std::vector<std::string> objects =			{"necklace", "book", "sword", "hat", "ring"};
	std::vector<std::string> adjectives =		{ "a blue", "an old", "a strange", "a possessed", "a dirty"};
	std::vector<std::string> completedActions = { "has stolen", "has bought", "has found", "has discovered", "has looked at" };
	void temp1();
	void temp2();
	
};
/*
struct plot {
	plotType type;
	plotTemplate temp;
};

enum plotType {
	EXPOSITION,
	MAJOR,
	MINOR
};

struct Template {
	std::vector<std::string> timeline;

};

struct plotTemplate : Template {

	//void alterCharacterStats();
};*/