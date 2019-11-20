// student.cpp
#include "student.h"

#include <iostream>

void printStudentInfo(student target)
{
	std::cout << "Person" << std::endl;
	std::cout << "  STUDENT ID : " << target.studentID;
	std::cout << "  ENROLLED COURSE : " << target.course;
	std::cout << "  LAST EXAM : " << target.lastExam;
}

float avgTestScore(student studentBody[], size_t len)
{
	float avg = 0;
	for (int i = 0; i < len; i++) 
	{
		avg += studentBody[i].lastExam;
	}
	avg /= len;
	return avg;
}
int midTestScore(student studentBody[], size_t len)
{
	return studentBody[len/2].lastExam;
}
int totalEnrolled(student studentBody[], size_t len, int classEnroll)
{
	int total = 0;
	for (int i = 0; i < len; i++)
	{
		if(classEnroll == studentBody[i].course)
		total += 1;
	}
	return total;
}