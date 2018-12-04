#include "pawn.hpp"
#include <iostream>

namespace dauphine
{
 
   pawn::pawn(std::size_t row, std::size_t col)
	: m_row(row), m_col(col)
   {
	
   }


   bool pawn::can_move(std::size_t row, std::size_t col) const
   {
	if(m_first_move)
	{
		if (row == m_row+2 && col == m_col)
		{
			piece* p1 = p_engine->get_piece(m_row+1, col);
                	piece* p2 = p_engine->get_piece(m_row+2, col);
			return (p1 == nullptr) && (p2 == nullptr);
		}
		else if(row == m_row+1 && col == m_col)
		{
			piece* p1 = p_engine->get_piece(row+1, col);
			return p1 == nullptr;
		}
		if(row == m_row+1 && ( (col==m_col+1) || (col==m_col-1)))
		{
			piece* p = p_engine->get_piece(row, col);
			return p != nullptr && p->get_color() != m_color;
		}
	}
	return false;
   }


}









































