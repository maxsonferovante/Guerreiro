#ifndef GANDALF_H
#define GANDALF_H

#include <string>
#include <iostream>

#include "Mago.h"

using std::string;
using std::ostream;

class Gandalf: public Mago
{
    friend ostream &operator<<(ostream &, const Gandalf &);
private:
    int prepotencia;
public:
    Gandalf(const string &,int, int, int,int);
    Gandalf(const Gandalf &);
    ~Gandalf();
    
    void ataqueMagico(int &);
    void defesaMagica(int &);
    
    const Gandalf &operator=(const Gandalf &);
};

#endif // GANDALF_H
