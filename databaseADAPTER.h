#ifndef DATABASEADAPTER
#define DATABASEADAPTER

#include <string>
#include "newDATABASE.h"

class databaseADAPTER{
private:
    newDATABASE* new_database;
public:
    databaseADAPTER(newDATABASE* new_database);
};

#endif