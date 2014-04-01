/* 
 * File:   Greeter.h
 * Author: tony.lowry
 *
 * Created on 06 March 2014, 17:25
 */

#ifndef Greeter_H
#define	Greeter_H
#include <string>

namespace greet {

    class Greeter {
    public:
        Greeter();
        Greeter(const Greeter& orig);
		std::string Greet();
        virtual ~Greeter();
    private:

    };
}
#endif	/* Greeter_H */

