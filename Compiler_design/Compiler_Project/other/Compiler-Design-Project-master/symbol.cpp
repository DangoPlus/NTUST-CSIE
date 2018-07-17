#include "symbol.h"
#include <stdlib.h>
#include <stdio.h>
#include <vector>



symbolTables::symbolTables(/* args */)
{
	symbolTable st;
	st.scopeName = "GOLOBAL";

	tables.push_back(st);
}

int symbolTables::push_table(std::string name)
{
	symbolTable st;
	st.scopeName = name;

	tables.push_back(st);
}

int symbolTables::pop_table()
{
	show();
	tables.pop_back();
}

int symbolTables::addVariable(variableEntry var)
{
	if (lookup(var.name).type == T_404)
		tables.back().variableEntries.push_back(var);
	else
		return 0;

	return 1;
}

int symbolTables::editVariable(variableEntry var)
{
	for (int i = tables.size(); i >= 0; i--)
	{
		for (int j = 0; j < tables.size(); j++)
		{
			variableEntry ve = tables[j].variableEntries[i];
			if (ve.name == var.name)
			{
				if (!ve.isConst)
					tables[j].variableEntries[i] = var;
			}
		}
	}
	return 0;
}

variableEntry symbolTables::lookup(std::string name)
{
	for (int i = tables.size() - 1; i >= 0; i--)
	{
		for (int j = 0; j < tables[i].variableEntries.size(); j++)
		{
			variableEntry ve = tables[i].variableEntries[j];
			if (ve.name == name)
				return ve;
		}
	}
	variableEntry notFound;
	notFound.type = T_404;
	return notFound;
}

void symbolTables::show()
{
	std::cout << "==============================================" << "\n";
	std::cout << "In \'" << tables.back().scopeName << "\' scope" << '\n';
	std::cout << "----------------------------------------------" << "\n";

	for (int i = 0; i < tables.back().variableEntries.size(); i++)
	{
		variableEntry ve = tables.back().variableEntries[i];
		for(int j = 0; j < ve.arrSize; j++)
		{
			if (j != 0)
				std::cout << "--------" << '\t';
			if (ve.isConst)
				std::cout << "Constant" << '\t';
			else
				std::cout << "Variable" << '\t';
			switch (ve.type)
			{
				case T_NONE:
					std::cout << "none" << '\t';

					std::cout << ve.name << '\t';
					std::cout << "?" << '\n';
					break;

				case T_INT:
					std::cout << "int" << '\t';
					if (ve.isArr)
					{
						std::cout << ve.name << '[' << j << ']' << '\t';
						std::cout << ve.data.intArr[j] << '\n';
					}
					else
					{
						std::cout << ve.name << '\t';
						std::cout << ve.data.intVal << '\n';
					}
					break;

				case T_FLOAT:
					std::cout << "float" << '\t';
					if (ve.isArr)
					{
						std::cout << ve.name << '[' << j << ']' << '\t';
						std::cout << ve.data.floatArr[j] << '\n';
					}
					else
					{
						std::cout << ve.name << '\t';
						std::cout << ve.data.floatVal << '\n';
					}
					break;

				case T_BOOL:
					std::cout << "bool" << '\t';
					if (ve.isArr)
					{
						std::cout << ve.name << '[' << j << ']' << '\t';
						std::cout << ve.data.boolArr[j] << '\n';
					}
					else
					{
						std::cout << ve.name << '\t';
						std::cout << ve.data.boolVal << '\n';
					}
					break;

				case T_STRING:
					std::cout << "string" << '\t';
					if (ve.isArr)
					{
						std::cout << ve.name << '[' << j << ']' << '\t';
						std::cout << ve.data.stringArr[j] << '\n';
					}
					else
					{
						std::cout << ve.name << '\t';
						std::cout << ve.data.stringVal << '\n';
					}
					break;

				default:
					break;
			}
		}
	}
	std::cout << "==============================================" << "\n";
}