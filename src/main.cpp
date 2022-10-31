#include <iostream>
#include <cpr/cpr.h>

int main() {

    cpr::Response r;
    std::string command;
    while (command != "exit"){
        std::cout << ": ";
        std::cin >> command;

        if (command == "get"){
            r = cpr::Get(cpr::Url("http://httpbin.org/get"));
            std::cout << r.text << std::endl;
        }
       if (command == "post"){
           r = cpr::Post(cpr::Url("http://httpbin.org/post"),cpr::Payload({{"parameter","p1"}}));
           std::cout << r.text << std::endl;
       }
       if (command == "put"){
           r = cpr::Put(cpr::Url("http://httpbin.org/put"));
           std::cout << r.text << std::endl;
       }
        if (command == "delete"){
            r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
            std::cout << r.text << std::endl;
        }
        if (command == "patch"){
            r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
            std::cout << r.text << std::endl;
        }
    }


}
