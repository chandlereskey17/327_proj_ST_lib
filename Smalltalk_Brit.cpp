/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: guest-zcjj54
 */
#pragma once
#include "../includes/Smalltalk.h"
#include "../includes/Smalltalk_Brit.h"
#include "../includes/constants.h"
#include "../includes/Watch.h"
#include <vector>
#include <string>

class Smalltalk_Brit : public Smalltalk
{
public:
	//create with appropriate phrases
	Smalltalk_Brit::Smalltalk_Brit(int iPerson=1){

	}
	Smalltalk_Brit::~Smalltalk_Brit(void){

	}
	void Smalltalk_Brit::populatePhrases(){
		mySmallTalk.push_back(BRIT_1);
		mySmallTalk.push_back(BRIT_2);
		mySmallTalk.push_back(BRIT_3);
		mySmallTalk.push_back(BRIT_4);
		mySmallTalk.push_back(BRIT_5);
		mySmallTalk.push_back(BRIT_6);
		mySmallTalk.push_back(BRIT_7);
	}
};



