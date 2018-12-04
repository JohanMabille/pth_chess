#ifndef INTERFACE_HPP
#define INTERFACE_HPP


#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>

namespace dauphine
{

enum class color
{
	white,
	black
};


class piece
{
public:
        virtual ~piece();
        
        piece(const piece&) = delete;
        piece& operator= (const piece&) = delete;
        piece(piece&&) = delete;
        piece& operator= (piece&&) = delete;
        
	void set_position(std::size_t row, std::size_t col);
	virtual bool can_move(std::size_t row, std::size_t col) const=0;

private:

protected:
	piece(std::size_t row, std::size_t col, color c);
	std::size_t m_row;
	std::size_t m_col;
	color m_color;

}
}
