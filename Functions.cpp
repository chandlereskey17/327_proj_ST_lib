//
/*
 * Functions.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: Chandler Eskey
 */
#include <iostream>
#include <memory>
#include <vector>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

using namespace std;

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
vector<unique_ptr<Smalltalk>> getPeople(int numBrit, int numAmerican,
		int numbAmericanDonutEnthusiest, int numWatches) {

	//create a vector to hold SmallTalk unique pointers
	vector<unique_ptr<Smalltalk>> myVect;

	//add brits to vector
	for (int i = 0; i < numBrit; i++) {
		unique_ptr<Smalltalk_Brit> brit(new Smalltalk_Brit(i));
		myVect.push_back(move(brit));
	}
	//add americans  to vector
	for (int i = 0; i < numBrit; i++) {
		unique_ptr<Smalltalk_American> american(new Smalltalk_American(i));
		myVect.push_back(move(american));
	}

	//add american donut enthusiest  to vector
	for (int i = 0; i < numBrit; i++) {
		unique_ptr<ST_American_DonutEnthusiest> a_DonutEnthusiest(
				new ST_American_DonutEnthusiest(i));
		myVect.push_back(move(a_DonutEnthusiest));
	}

	//create some watches (as long as number watches <= numb people)
	//then give the watches away to first NUM_WATCHES people in the vector
	// when you are finished using the vector you return
	//from this function(see Smalltalk header for hints)
	int i = 0;
	while (i < myVect.size() && numWatches > 0) {
		unique_ptr<Watch> new_watch(new Watch());
		if (myVect[i]->giveWatch(new_watch)) {
			numWatches--;
		}
		i++;
	}

	//return your vector
	return myVect;
}
