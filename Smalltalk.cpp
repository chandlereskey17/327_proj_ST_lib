/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: Chandler Eskey
 */
#pragma once
#include <string>
#include <vector>
#include <memory>
#include "./includes/Watch.h"
#include "./includes/constants.h"
#include "./includes/Smalltalk.h"
//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish between objects of the same type
Smalltalk::Smalltalk(std::string myNationality, int iPerson) :
		nationality(myNationality), iPerson(iPerson), current_phrase(0) {
}

Smalltalk::~Smalltalk(void) {

}

//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
//with the last and then it starts over
//takes the form Nationality iPerson: phrase
//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
//AMERICAN 10:Why yes, I would like to supersize that
std::string Smalltalk::saySomething() {
	std::string phrase = mySmallTalk[current_phrase % (mySmallTalk.size())];
	current_phrase++;
	return phrase;
}

//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS: (from the actual watch object itself) and then the time
//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
std::string Smalltalk::getTime() {
	if (this->pWatch != 0)
		return "THE_CURRENT_TIME_IS: " + pWatch->getTime();
	return I_DO_NOT_HAVE_A_WATCH;
}

//if this object has a watch it is taken away, otherwise an empty unique_ptr is returned
// This transaction simulates giving away a watch
std::unique_ptr<Watch> Smalltalk::takeWatch() {
	std::unique_ptr<Watch> the_watch;
	if (this->pWatch == 0)
		the_watch = 0;
	else
		the_watch = move(pWatch);
	return the_watch;
}

//if already have a watch then return false and dont change pWatch pointer
//otherwise accept watch (return true) and set this->pWatch=pWatch (use std::move)
bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (this->pWatch != 0)
		return false;
	this->pWatch = move(pWatch);
	return true;
}

//Abstract Base Class (ABC), implement in derived classes
void Smalltalk::populatePhrases() {
}

