#include <iostream>
#include "App.h"


namespace project25{

    App::App(){
        std::cout << "#Constructor#";
    }

    App::~App(){
        std::cout << "@Destructor@" ;
    }

    void App::run() {
        
        std::cout << "Welcome to Project25 \n";
   
    }
}