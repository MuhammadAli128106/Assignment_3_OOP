#pragma once

class Organism {
	int x;int y;	//top left pos
	int width; int height;

public:
	bool** internalShape() {

	}



};

struct Tile {
public:

	float nutrientLevel;//determines if life can be sustained
	float toxicity;//if toxicity is high organism dies
	Organism* occupant;// pting to the organism currently covering this tile.
	//if>1, pt to more dominant one

};

class World {
	Tile** tileObjs;
	Organism* population;

public:
	void runIteration(){
		for (int i = 0; i </*condition*/;i++) {
			population[i].update();
		}
	}
};