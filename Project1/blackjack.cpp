#include "blackjack.h"
#include <iostream>

// Возвращает Код масти карты
char getSuitCode(const CardSuit &suit) {
	switch (suit)
	{
	case SUIT_CLUBS:	return 'C';
	case SUIT_DIAMONDS: return 'D';
	case SUIT_HEARTS:	return 'H';
	case SUIT_SPADES:	return 'S';
	default:
		std::cout << "default case:\tconst char getSuitCode(CardSuit &)" << '\n';
		exit(EXIT_FAILURE);
	}

}

// Возвращает Код ранга карты
char getRankCode(const CardRank &rank) {
	switch (rank)
	{
	case RANK_2:		return '2';
	case RANK_3:		return '3';
	case RANK_4:		return '4';
	case RANK_5:		return '5';
	case RANK_6:		return '6';
	case RANK_7:		return '7';
	case RANK_8:		return '8';
	case RANK_9:		return '9';
	case RANK_10:		return 'T';
	case RANK_JACK:		return 'J';
	case RANK_QUEEN:	return 'Q';
	case RANK_KING:		return 'K';
	case RANK_ACE:		return 'A';
	default:
		std::cout << "default case:\tconst char getRankCode(CardRank &)" << '\n';
		exit(EXIT_FAILURE);
	}
}

// Выводит на экран Код карты
void printCardCode(const Card &card) {
	std::cout << getRankCode(card.rank);
	std::cout << getSuitCode(card.suit);
}

// Заполняет массив (Колоду) всеми возможными значениями карт
void fillingDeck(std::array<Card, blackjack::numCards> &deck) {
	size_t max_cards = MAX_RANKS * MAX_SUITS;
	if (deck.size() != max_cards) {
		std::cout << "number of cards mismatch:\tfillingDeck()" << '\n';
		exit(EXIT_FAILURE);
	}

	for (size_t iSuit{}; iSuit != MAX_SUITS; ++iSuit)
	{
		for (size_t iRank{}; iRank != MAX_RANKS; ++iRank)
		{
			deck[(iSuit * MAX_RANKS) + iRank].rank = CardRank(iRank);
			deck[(iSuit * MAX_RANKS) + iRank].suit = CardSuit(iSuit);
		}
	}
}

// Выводит на экран Колоду карт
void printDeck(const std::array<Card, blackjack::numCards> &deck) {
	for (auto const &card : deck)
	{
		printCardCode(card);
		std::cout << " ";
	}
}

// Меняет между собой две карты
void swapCard(Card &card1, Card &card2) {
	Card temp(card1);
	card1 = card2;
	card2 = temp;
}

// Перемешивает Колоду карт
void shuffleDeck(std::array<Card, blackjack::numCards> &deck) {
	for (auto curCard{ deck.begin() }; curCard != deck.end(); ++curCard)
	{
		Card *randCard = &deck[rand() % blackjack::numCards];
		swapCard(*curCard, *randCard);
	}
}

// Возвращает числовое значение карты
int8_t getCardValue(Card &card) {
	switch (card.rank)
	{
	case RANK_2:		return 2;
	case RANK_3:		return 3;
	case RANK_4:		return 4;
	case RANK_5:		return 5;
	case RANK_6:		return 6;
	case RANK_7:		return 7;
	case RANK_8:		return 8;
	case RANK_9:		return 9;
	case RANK_10:		return 10;
	case RANK_JACK:		return 10;
	case RANK_QUEEN:	return 10;
	case RANK_KING:		return 10;
	case RANK_ACE:		return 11;
	default:
		std::cout << "default case:\tint8_t getCardValue(Card &)" << '\n';
		exit(EXIT_FAILURE);
	}
}