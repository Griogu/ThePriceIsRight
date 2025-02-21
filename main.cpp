#include "The_Price_Is_Right.hpp"

int	main(void)
{
	ThePriceIsRight	TPIR;
	std::string		Answer;
	int				NewAnswer;

	TPIR.SetToFind();
	while (1)
	{
		std::cout << "Enter a number between 1 and 1000 include > ";
		std::getline(std::cin, Answer);
		if (std::cin.eof()) {
			std::cout << std::endl << "Come back later !!!" << std::endl;
			break ;
		}
		NewAnswer = TPIR.CheckValidAnswer(Answer);
		if (!NewAnswer)
			continue ;
		else if (TPIR.Right(NewAnswer))
			break ;
	}
	return (0);
}
