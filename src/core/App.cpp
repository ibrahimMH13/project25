#include <iostream>
#include "IApp.h"
#include <memory>

namespace project25{

    class App: public IApp{
        
        public:
         
         void run() override {

            std::cout << " Welocme to Project25 \n";

         }
    };

    std::unique_ptr<IApp> createApp() {
    
        return std::make_unique<App>();
    
    }


}