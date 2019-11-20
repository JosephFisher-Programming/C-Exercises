//  Main.cpp
#include <iostream>

#include "person.h"
#include "piggyBank.h"
#include "student.h"
#include "Vector2D.h"
#include "playerVSZombie.h"
#include "highScore.h"
#include "playerRandomization.h"

int main() 
{
	person me;
	me.age = 18;
	me.cash = 20.0f;
	me.points = 50;

	piggyBank myMoney;
	myMoney.oneDollars = 3;
	myMoney.twoDollars = 5;
	myMoney.fiveDollars = 2;
	myMoney.quarterCoins = 3;
	myMoney.dimeCoins = 1;
	myMoney.nickleCoins = 1;
	myMoney.pennyCoins = 1;

	student you[5];
	you[0].studentID = 69420;
	you[0].course = 1;
	you[0].lastExam = 39*5;
	you[1].studentID = 69420;
	you[1].course = 1;
	you[1].lastExam = 39;
	you[2].studentID = 69420;
	you[2].course = 3;
	you[2].lastExam = 39;
	you[3].studentID = 69420;
	you[3].course = 2;
	you[3].lastExam = 39;
	you[4].studentID = 69420;
	you[4].course = 1;
	you[4].lastExam = 39;


	printPersonInfo(me);

	std::cout << std::endl << "Money " << std::endl;
	std::cout << "  Dollars: " << calcPiggyBankDollars(myMoney) << std::endl;
	std::cout << "  Coins: " << calcPiggyBankCoins(myMoney) << std::endl;
	std::cout << "  Total: " << calcPiggyBankTotal(myMoney) << std::endl << std::endl;

	printStudentInfo(you[1]);
	std::cout << std::endl << "Statistics " << std::endl;
	std::cout << "  AVG SCORE: " << avgTestScore(you,5) << std::endl;
	std::cout << "  MEDIAN SCORE: " << midTestScore(you,5) << std::endl;
	std::cout << "  TOTAL: " << totalEnrolled(you,5,1) << std::endl << std::endl;

	Vector2D setA = { 5,5 };
	Vector2D setB = { 1,1 };

	std::cout << "Sum:  " << Sum(setA,setB).posX << " " << Sum(setA, setB).posY << std::endl;
	std::cout << "Diff:  " << Difference(setA, setB).posX << " " << Difference(setA, setB).posY << std::endl;
	std::cout << "Distance:  " << Distance(setA, setB) << std::endl;

	player pChar;
	pChar.currentHealth = 5;
	pChar.defensePoints = 1;
	pChar.attackPoints = 4;

	player enemChar;
	enemChar.currentHealth = 6;
	enemChar.defensePoints = 2;
	enemChar.attackPoints = 2;
	Attack(pChar, enemChar);

	while (pChar.currentHealth > 0 && enemChar.currentHealth > 0) 
	{
		std::cout << "P Health:  " << pChar.currentHealth << "  E Health:  " << enemChar.currentHealth << std::endl;
		pChar.currentHealth -= Attack(pChar, enemChar);
		enemChar.currentHealth -= Attack(enemChar, pChar);
	}
	std::cout << "P Health:  " << pChar.currentHealth << "  E Health:  " << enemChar.currentHealth << std::endl;

	highScoreData scores[5];
	scores[0].highScore = 1;
	scores[0].timeToComplete = 7;
	scores[1].highScore = 2;
	scores[1].timeToComplete = 5;
	scores[2].highScore = 12;
	scores[2].timeToComplete = 13;
	scores[3].highScore = 8;
	scores[3].timeToComplete = 15;
	scores[4].highScore = 19;
	scores[4].timeToComplete = 6;

	highScoreData scoreCopy[5];

	std::cout << "HighScore:  " << HighScore(scores, 5) << std::endl;
	std::cout << "AvgTime:  " << avgCompletion(scores, 5) << std::endl;
	topScoreAssigner(scores, scoreCopy, 5, 5);

	std::cout << "FirstList:  " << scores[0].highScore << std::endl;
	std::cout << "SecondList:  " << scoreCopy[0].highScore << std::endl;

	randPlayer * people = new randPlayer[5];
	people = randomPlayerGenerator(5);

	for (int i = 0; i < 5; i++) 
	{
		std::cout << std::endl << "People  " << std::endl;
		std::cout << "  ATK:  " << people[i].ATK << std::endl;
		std::cout << "  DEF:  " << people[i].DEF << std::endl;
		std::cout << "  EXP:  " << people[i].EXP << std::endl;
	}
	
	item sword;
	sword.gold = 8;
	sword.IDNum = 1;

	item axe;
	axe.gold = 10;
	axe.IDNum = 2;

	std::cout << "Did you add a Sword?:  " << addItem(people, sword) << std::endl;
	std::cout << "Did you add an Axe?:  " << addItem(people, axe) << std::endl;

	std::cout << "Do They have a sword?:  " << hasItem(people, sword.IDNum) << std::endl;
	std::cout << "Do They have a axe?:  " << hasItem(people, axe.IDNum) << std::endl;
	std::cout << "Total Worth?:  " << totalValue(people) << std::endl;

	while (true) {}
	return 0;
}