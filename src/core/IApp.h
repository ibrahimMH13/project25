#include <memory>
#ifndef IAPP
#define IAPP

namespace project25 {

    class IApp {

    public:

        virtual ~IApp() = default; 

        virtual void run() = 0;    

    };

    std::unique_ptr<IApp> createApp();
}

#endif