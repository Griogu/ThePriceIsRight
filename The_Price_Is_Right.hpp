#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

class ThePriceIsRight
{
	 public:
		ThePriceIsRight();
		~ThePriceIsRight();

		void	SetToFind(void);
		int		GetToFind(void);
		int		Right(int Answer);
		int		CheckValidAnswer(std::string Answer);
	 private:
		void	_Wrong(int Answer);
		int		_ToFind;
};
