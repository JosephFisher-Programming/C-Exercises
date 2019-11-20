//  student.h
#pragma once

#include <iostream>

struct student
{
	int studentID;
	int course;

	int lastExam;
};

void printStudentInfo(student);
float avgTestScore(student[], size_t);
int midTestScore(student[], size_t);
int totalEnrolled(student[], size_t,int);