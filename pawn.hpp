#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <cstdef>

namespace dauphine 
{


  /*enum class color
  {
	white;
	black;
  }*/



  class piece 
  {

    public:

	virtual ~piece();

	piece(const piece&) = delete;
	piece& operator= (const piece&) = delete;
	piece(piece&&) = delete;
	piece& operator= (piece&&) = delete;

	//sémentique d'entrée
	
	void set_position(std::size_t row, std::size_t col);
	virtual bool can_move(std::size_t row, std::size_t col) const = 0;	


    protected:

	piece(std::size_t row, std::size_t col/*, color c*/);

	std::size_t m_row;
	std::size_t m_col;
	color m_color;
  }



#ifndef PAWN_HPP
#define PAWN_HPP

  class pawn: public piece
  {
    public:
	
	pawn(std::size_t row, std::size_t col);
	virtual ~pawn();

	bool can_move(std::size_t row, std::size_t col/*, color c/*);

  }

#endif







}



































