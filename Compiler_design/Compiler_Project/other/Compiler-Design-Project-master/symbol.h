#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

enum TYPE
{
	T_NONE,
	T_INT,
	T_FLOAT,
	T_BOOL,
	T_STRING,
	T_404
};


typedef union{
	int intVal;
	float floatVal;
	bool boolVal;
	char* stringVal;

	int* intArr;
	float* floatArr;
	bool* boolArr;
	char** stringArr;
} variableData;

typedef struct{
	std::string name;
	int type;
	bool isConst;
	bool isArr;
	int arrSize;
	union {
		variableData data;
	};
} variableEntry;

typedef struct{
	std::string scopeName;
	std::vector<variableEntry> variableEntries;
} symbolTable;


class symbolTables
{
private:
	std::vector<symbolTable> tables;
public:
	symbolTables();

	int push_table(std::string name);
	int pop_table();

	int addVariable(variableEntry var);
	int editVariable(variableEntry var);
	variableEntry lookup(std::string name);

	void show();
};

#endif