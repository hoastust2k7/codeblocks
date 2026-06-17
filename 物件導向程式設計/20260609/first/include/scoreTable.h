#ifndef SCORETABLE_H
#define SCORETABLE_H

#include <person.h>
#include <student.h>
#include <fstream>
#include <iostream>


class scoreTable
{
    friend ostream & operator << (ostream &out, scoreTable &b);
    public:
        scoreTable();
        scoreTable(string file);
        virtual ~scoreTable();
        void sorting(int x);

    protected:

    private:
        int n;   //n�O�X��
        string title;
        student *score;
};

#endif // SCORETABLE_H
