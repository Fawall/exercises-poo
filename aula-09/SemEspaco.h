#ifndef SEMESPACO_H
#define SEMESPACO_H

#include <stdexcept>
#include <string>

using namespace std;

class SemEspaco : public logic_error {
    
    public:
        SemEspaco(std::string msg) : logic_error(msg){};

};



#endif