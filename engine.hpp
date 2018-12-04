#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>

namespace dauphine
{

class piece; //forward declaration


class engine:
{
public:
	piece* get_piece(std::size_t row, size_t col) const;

}
}


