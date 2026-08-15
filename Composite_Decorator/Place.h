#ifndef PLACE_H
#define PLACE_H

#include <string>
#include <vector>

class Place {
protected:
    std::string name;

public:
    Place(const std::string& name);
    virtual ~Place();

    virtual void print(int depth = 0) const = 0;
    const std::string& getName() const;
};



#endif
