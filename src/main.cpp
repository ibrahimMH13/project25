#include <iostream>
#include "core/IApp.h"
#include <memory>

using namespace project25;

int main(){

   std::unique_ptr<IApp> app = createApp();
   
   app->run();
    
    return 0;
}