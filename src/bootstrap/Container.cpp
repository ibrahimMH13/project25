#include <iostream>
#include "container.h"


class Container: public IContainer{

    std::unordered_map<std::string, std::shared_ptr<void>> services;

    public :

    template <typename T>
    
    void registerService(std::string& name , std::shared_ptr<T> service){

        services[name] = std::static_pointer_cast<void> service();
    }

    template <typename T>
    std::shared_ptr<T> get(std::string& name){

        auto s = services.find(name);

       if (services.find(name) == services.end())
       {
            throw std::runtime_error("this " << name << "is not register");
       }
       return std::static_pointer_cast<T> (s->second);
    }

};
