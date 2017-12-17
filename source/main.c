 #include<stdio.h>

struct card
{
	char *face;
	char *suit;
};

typedef struct card Card;

int main(void)
{
	Card aCard;
	Card *cardPtr;

	aCard.face = "Ace";
	aCard.suit = "Spades";

	cardPtr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
		cardPtr->face, " of ", cardPtr->suit,
		(*cardPtr).face, " of ", (*cardPtr).suit);


	system("pause");
	return 0;
}
