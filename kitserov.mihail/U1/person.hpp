#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <cstddef>
namespace kitserov
{
  struct Person
  {
    size_t id;
    std::string info;
  };
  struct PersonsContainer
  {
    Person* data;
    size_t size;
    size_t capacity;
  };
  bool contains(const PersonsContainer& container, size_t id) {
    for (size_t i = 0; i < container.size; ++i) {
        if (container.data[i].id == id) {
            return true;
        }
    }
    return false;
  }
}

#endif