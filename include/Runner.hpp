//Copyright 2019 <LinkIvan333>

#ifndef INCLUDE_RUNNER_HPP_
#define INCLUDE_RUNNER_HPP_
#include <vector>
#include <iostream>
using std::vector;
class Runner{
private:
    static void create(vector <int> &level,int size);
public:
    static void cache_levels(vector <int> &levels);
    static void run(vector <int> &levels);
};
#endif // INCLUDE_RUNNER_HPP_
