#include "The_Price_Is_Right.hpp"

ThePriceIsRight::ThePriceIsRight() {}

ThePriceIsRight::~ThePriceIsRight() {}

void	ThePriceIsRight::SetToFind() {
	int	min = 1;
	int	max = 1000;

	std::srand(std::time(0));
	this->_ToFind = rand() % (max - min + 1) + min;
}

int	ThePriceIsRight::GetToFind() {
	return (this->_ToFind);
}

int	ThePriceIsRight::Right(int Answer) {
	if (Answer == GetToFind()) {
		std::cout << "GOOD JOB !!! CONGRATULATIONS, IT WAS " << Answer << " !!!" << std::endl;
		return (1);
	}
	this->_Wrong(Answer);
	return (0);
}

void	ThePriceIsRight::_Wrong(int Answer) {
	if (Answer > GetToFind())
		std::cout << "Less !!" << std::endl;
	else if (Answer < GetToFind())
		std::cout << "More !!" << std::endl;
}

int	ThePriceIsRight::CheckValidAnswer(std::string Answer) {
	int	NewAnswer = 0;

	if (Answer.size() > 4 || Answer.size() < 1) {
		std::cout << "You can just enter number between 1 and 1000 include !!!" << std::endl;
		return (NewAnswer);
	}
	for (size_t i = 0; i < Answer.size(); i++) {
		if (!isdigit(Answer[i])) {
			std::cout << "You can just enter numeric number !!!" << std::endl;
			return (NewAnswer);
		}
	}
	NewAnswer = atoi(Answer.c_str());
	if (NewAnswer > 1000) {
		std::cout << "You can just enter number between 1 and 1000 include !!!" << std::endl;
		return (0);
	}
	return (NewAnswer);
}
