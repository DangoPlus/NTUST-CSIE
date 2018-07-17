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

typedef struct variableEntry{
	std::string name;
	int type;
	bool isInit;
	bool isConst;
	bool isArr;
	int arrSize;
	union {
		variableData data;
	};
} variableEntry;

variableEntry ve_basic(std::string name, int type, bool isConst);
variableEntry ve_arr(std::string name, int type, bool isConst, int arrSize);
variableEntry ve_basic_notInit(std::string name, int type, bool isConst);
variableEntry ve_arr_notInit(std::string name, int type, bool isConst, int arrSize);

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
	int update_tableName(std::string name);
	int pop_table();
	int show_topTable();

	int addVariable(variableEntry var);
	int editVariable(variableEntry var);

	variableEntry lookup(std::string name);
	variableEntry lookupForNowScope(std::string name);
	
};

#endif