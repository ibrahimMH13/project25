#include <iostream>
#include "core/IApp.h"
#include <memory>
int main(){

   std::unique_ptr<project25::IApp> app = project25::createApp();
   
   app->run();
    
    return 0;
}