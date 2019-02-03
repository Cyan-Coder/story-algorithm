#include <iostream>
#include "story.h"

int main() {
	plot p;
	p.createCast(10);

	p.createSentance(p.t1);
	p.createSentance(p.t2);
	p.createSentance(p.t1);
	p.createSentance(p.t2);
	p.createSentance(p.t2);
	p.createSentance(p.t2);
	p.createSentance(p.t1);
	p.createSentance(p.t1);
	p.createSentance(p.t2);
	p.createSentance(p.t1);
	return 0;
}