#ifndef UTILS1_HPP
#define UTILS1_HPP

#include <ostream>
#include <person.hpp>
#include <string>
namespace kitserov
{
  void printAll(const PersonsContainer& container, std::ostream& out)
  {
    for (std::size_t i = 0; i < container.size; ++i) {
      out << container.data[i].id << ' ' << container.data[i].info << '\n';
    }
  }
  bool readLine(const std::string& line, std::size_t& id, std::string& info)
  {
    size_t pos = 0;
    const std::size_t len = line.size();
    while (pos < len && (line[pos] == ' ' || line[pos] == '\t')) {
        ++pos;
    }
    if (pos == len) {
        return false;
    }

  }
}

#endif