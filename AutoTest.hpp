#pragma once

#include <iostream>
#include "RemoveSmiles.hpp"

bool AutoTest(bool isDevMode);

bool TestEmpty(bool needOut);
bool TestOneSymb(bool needOut);
bool TestTwoSymb(bool needOut);
bool TestSevSymb(bool needOut);

bool TestColon(bool needOut);
bool TestColonLeft(bool needOut);
bool TestColonRight(bool needOut);
bool TestColonCenter(bool needOut);

bool TestColonDash(bool needOut);
bool TestColonDashLeft(bool needOut);
bool TestColonDashRight(bool needOut);
bool TestColonDashCenter(bool needOut);

bool TestHappyOne(bool needOut);
bool TestHappyOneLeft(bool needOut);
bool TestHappyOneRight(bool needOut);
bool TestHappyOneCenter(bool needOut);
bool TestHappyOneBracket(bool needOut);

bool TestSadOne(bool needOut);
bool TestSadOneLeft(bool needOut);
bool TestSadOneRight(bool needOut);
bool TestSadOneCenter(bool needOut);
bool TestSadOneBracket(bool needOut);

bool TestHappyThree(bool needOut);
bool TestHappyThreeLeft(bool needOut);
bool TestHappyThreeRight(bool needOut);
bool TestHappyThreeCenter(bool needOut);
bool TestHappyThreeBrackets(bool needOut);

bool TestSadThree(bool needOut);
bool TestSadThreeLeft(bool needOut);
bool TestSadThreeRight(bool needOut);
bool TestSadThreeCenter(bool needOut);
bool TestSadThreeBrackets(bool needOut);

bool TestHappyHappy(bool needOut);
bool TestHappySad(bool needOut);
bool TestSadHappy(bool needOut);
bool TestSadSad(bool needOut);

bool TestColonHappy(bool needOut);
bool TestColonDashHappy(bool needOut);
bool TestColonSad(bool needOut);
bool TestColonDashSad(bool needOut);