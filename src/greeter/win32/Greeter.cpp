/* 
 * File:   Greeter.cpp
 * Author: tony.lowry
 * 
 * Created on 06 March 2014, 17:26
 */

#include "../Greeter.h"

namespace greet {

    Greeter::Greeter() {
    }

    Greeter::Greeter(const Greeter& orig) {
    }

	std::string Greeter::Greet() {
		std::string resp = "Greetings from the Windows greeting implementation";
		return resp;
    }
	
    Greeter::~Greeter() {
    }
}