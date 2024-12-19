#ifndef ICONTAINER_H
#define ICONTAINER_H

#include <memory>
#include <unordered_map>
#include <string>
#include <stdexcept>


class IContainer {

    IContainer() = default ;
    ~IContainer() = default ;
    
    public: 

    template <typename T>
    void registerService(std::string& name, std::shared_ptr<T> service);
    
    template <typename T>
    std::shared_ptr<T> get(std::string& name);
    
    virtual IContainer* getContainer() = 0;

};

#endif