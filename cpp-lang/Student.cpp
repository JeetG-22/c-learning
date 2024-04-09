#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    void PrintGrade();
    void addGrade(double grade);
    double getGpa();
    void chngAddr(char addr[]);

private:
    double GPA;
    string addr1, addr2;
};