#ifndef BLACKJACK_H
#define BLACKJACK_H

#include <array>

enum CardSuit
{
	SUIT_CLUBS,
	SUIT_DIAMONDS,
	SUIT_HEARTS,
	SUIT_SPADES,
	MAX_SUITS
};

enum CardRank
{
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_JACK,
	RANK_QUEEN,
	RANK_KING,
	RANK_ACE,
	MAX_RANKS
};

namespace blackjack
{
	const size_t
		numCards = MAX_RANKS * MAX_SUITS;
}

struct Card {
	CardRank rank;
	CardSuit suit;
};

int8_t getCardValue(Card &card);
char getSuitCode(const CardSuit& suit);
char getRankCode(const CardRank& rank);
void printCardCode(const Card& card);
void fillingDeck(std::array<Card, blackjack::numCards> &deck);
void printDeck(const std::array<Card, blackjack::numCards> &deck);
void swapCard(Card &card1, Card &card2);
void shuffleDeck(std::array<Card, blackjack::numCards> &deck);

#endif // !BLACKJACK_H

