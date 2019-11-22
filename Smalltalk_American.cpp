/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: guest-zcjj54
 */
#pragma once
#include <vector>
#include <string>
#include "../includes/Smalltalk.h"
#include "../includes/Smalltalk_American.h"
#include "../includes/constants.h"
#include "../includes/Watch.h"

class Smalltalk_American : Smalltalk
{
public:
	//create with appropriate phrases
	//use base class call to set Nationality (See constants for Nationality strings)
	Smalltalk_American::Smalltalk_American(int iPerson =1){

	}
	Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson =1){

	}

	Smalltalk_American::~Smalltalk_American(void){

	}
	void Smalltalk_American::populatePhrases(){
		mySmallTalk.push_back(AMERICAN_PHRASE_1);
		mySmallTalk.push_back(AMERICAN_PHRASE_2);
		mySmallTalk.push_back(AMERICAN_PHRASE_3);
		mySmallTalk.push_back(AMERICAN_PHRASE_4);
		mySmallTalk.push_back(AMERICAN_PHRASE_5);
	}
};

