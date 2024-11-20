#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// int num_in_rank[NUM_RANKS];
// int num_in_suit[NUM_SUITS];
int hand[5][2] = {0};
bool straight, flush, four, three, two_pair, pair;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);


int main()
{
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
}
bool is_straight(int hands[5][2])
{
    // Step 1: Sort cards by rank
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (hands[i][0] > hands[j][0])
            {
                // Swap ranks
                int temp_rank = hands[i][0];
                hands[i][0] = hands[j][0];
                hands[j][0] = temp_rank;

                // Swap suits (keep cards intact)
                int temp_suit = hands[i][1];
                hands[i][1] = hands[j][1];
                hands[j][1] = temp_suit;
            }
        }
    }

    // Step 2: Check for consecutive ranks
    bool straight_normal = true;
    for (int i = 0; i < 4; i++)
    {
        if (hands[i + 1][0] != hands[i][0] + 1)
        {
            straight_normal = false;
            break;
        }
    }

    // Step 3: Handle special Ace cases
    bool ace_low_straight = (hands[0][0] == 1 && hands[1][0] == 2 && hands[2][0] == 3 &&
                             hands[3][0] == 4 && hands[4][0] == 5);

    bool ace_high_straight = (hands[0][0] == 10 && hands[1][0] == 11 && hands[2][0] == 12 &&
                              hands[3][0] == 13 && hands[4][0] == 1);

    return straight_normal || ace_low_straight || ace_high_straight;
}
void read_cards(void)
{
    // bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    /*for (rank = 0; rank < NUM_RANKS; rank++)
    {
        num_in_rank[rank] = 0;
        for (suit = 0; suit < NUM_SUITS; suit++)
        {
            card_exists[rank][suit] = false;
        }
    }

    for (suit = 0; suit < NUM_SUITS; suit++)
    {
        num_in_suit[suit] = 0;
    }*/
    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch)
        {
        case '0':
            exit(EXIT_SUCCESS);
        case '2':
            rank = 0;
            break;
        case '3':
            rank = 1;
            break;
        case '4':
            rank = 2;
            break;
        case '5':
            rank = 3;
            break;
        case '6':
            rank = 4;
            break;
        case '7':
            rank = 5;
            break;
        case '8':
            rank = 6;
            break;
        case '9':
            rank = 7;
            break;
        case 't':
            rank = 8;
            break;
        case 'T':
            rank = 8;
            break;
        case 'j':
        case 'J':
            rank = 9;
            break;
        case 'q':
        case 'Q':
            rank = 10;
            break;
        case 'k':
        case 'K':
            rank = 11;
            break;
        case 'a':
        case 'A':
            rank = 12;
            break;
        default:
            bad_card = true;
        }
        suit_ch = getchar();
        switch (suit_ch)
        {
        case 'c':
        case 'C':
            suit = 0;
            break;
        case 'd':
        case 'D':
            suit = 1;
            break;
        case 'h':
        case 'H':
            suit = 2;
            break;
        case 's':
        case 'S':
            suit = 3;
            break;
        default:
            bad_card = true;
        }
        while ((ch = getchar()) != '\n')
        {
            if (ch != ' ')
            {
                bad_card = true;
            }
        }
        if (bad_card)
        {
            printf("Bad card, ignored.\n");
        }
        /*else if (card_exists[rank][suit])
        {
            printf("Duplicate card, ignored.\n");
        }*/
        else
        {
            // num_in_rank[rank]++;
            // num_in_suit[suit]++;
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            //card_exists[rank][suit] = true;
            cards_read++;
        }
    }
}

void analyze_hand(void)
{
    int num_consec = 0;
    int card;
    int heart = 0, spade = 0, diamond = 0, club = 0;
    int rank_counts[NUM_RANKS];
    straight = false;
    flush = false;
    four = false;
    three = false;
    two_pair = false;
    pair = false;

    for (card = 0; card < NUM_CARDS; card++)
    {
        if (hand[card][1] == 2)
        {
            heart++;
        }
        if (hand[card][1] == 3)
        {
            spade++;
        }
        if (hand[card][1] == 1)
        {
            diamond++;
        }
        if (hand[card][1] == 0)
        {
            club++;
        }
    }  
    if (heart == 5 || spade == 5 || diamond == 5 || club == 5)
    {
        flush = true;
    }

    if (is_straight(hand))
    {
        straight = true;
    }

    for (card = 0; card < NUM_CARDS; card++)
    {
        rank_counts[hand[card][0]]++;
    }
    int pairs = 0;
    for (int i = 0; i < NUM_RANKS; i++)
    {
        if (rank_counts[i] == 4)
        {
            four = true;
        }
        if (rank_counts[i] == 3)
        {
            three = true;
        }
        if (rank_counts[i] == 2)
        {
            pairs++;
        }
    }
    if (pairs == 1)
    {
        pair = true;
    }
    if (pairs == 2)
    {
        two_pair = true;
    }
    /*
    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        if (num_in_rank[rank] == 4)
        {
            four = true;
        }
        if (num_in_rank[rank] == 3)
        {
            three = true;
        }
        if (num_in_rank[rank] == 2)
        {
            pairs++;
        }
    }*/
}

void print_result(void)
{
    if (straight && flush)
    {
        printf("Straight flush");
    }
    else if (four)
    {
        printf("Four of a kind");
    }
    else if (three && pairs == 1)
    {
        printf("Full house");
    }
    else if (flush)
    {
        printf("Flush");
    }
    else if (straight)
    {
        printf("Straight");
    }
    else if (three)
    {
        printf("Three of a kind");
    }
    else if (two_pair)
    {
        printf("Two pairs");
    }
    else if (pair)
    {
        printf("Pair");
    }
    else
    {
        printf("High card");
    }
    printf("\n\n");
}