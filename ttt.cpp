#include <iostream>
#include <vector>

// Vectors that contain the board state
std::vector<std::string> row1 = {" ", "|", " ", "|", " "};
std::vector<std::string> row2 = {" ", "|", " ", "|", " "};
std::vector<std::string> row3 = {" ", "|", " ", "|", " "};
std::string divider = "-----";

// Turn counter
int turn = 1;

// Player move input
int position;

// Checks for a full board
bool game_complete;

// Checks for a winning board state
bool win_check = false;

// Prints the board state
void current_board() {

        std::cout << "\n";
        std::cout << row1[0] << row1[1] << row1[2] << row1[3] << row1[4]<< "\n";
        std::cout << divider << "\n";
        std::cout << row2[0] << row2[1] << row2[2] << row2[3] << row2[4]<< "\n";
        std::cout << divider << "\n";
        std::cout << row3[0] << row3[1] << row3[2] << row3[3] << row3[4]<< "\n";
    
    }

// Prints turn number, and ask player to select a square which is inputed into the variable position
int player_move() {
    
    std::cout << "\nTurn: " << turn << "\n\n";
    std::cout << "Select a square: ";
    std::cin >> position;
    
    return position;

}

// Checks the board for all possible winning game states
bool win_checks() {

    if (row1[0] == row2[2] && row2[2] == row3[4] && (row1[0] == "X" || row1[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[0] << " Wins!\n";}

    else if (row1[4] == row2[2] && row2[2] == row3[0] && (row1[4] == "X" || row1[4] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[4] << " Wins!\n";}

    else if (row1[0] == row2[0] && row2[0] == row3[0] && (row1[0] == "X" || row1[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[0] << " Wins!\n";}

    else if (row1[2] == row2[2] && row2[2] == row3[2] && (row1[2] == "X" || row1[2] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[2] << " Wins!\n";}


    else if (row1[4] == row2[4] && row2[4] == row3[4] && (row1[4] == "X" || row1[4] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[4] << " Wins!\n";}


    else if (row1[0] == row1[2] && row1[2] == row1[4] && (row1[0] == "X" || row1[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row1[0] << " Wins!\n";}

    else if (row2[0] == row2[2] && row2[2] == row2[4] && (row2[0] == "X" || row2[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row2[0] << " Wins!\n";}


    else if (row3[0] == row3[2] && row3[2] == row3[4] && (row3[0] == "X" || row3[0] == "O")) {
        
        win_check = true;
        std::cout << "\n" << row3[0] << " Wins!\n";}

    else {

        win_check = false;
    }


    return game_complete;

}

int main() {
    
    
    game_complete = false;

    // Do while loop that keeps the game going if there is no winning game state or the board isn't full
    do {
        
        // asks for player input
        player_move();

        // switch that checks for player move input and edits board state accordingly while also checking for invalid inputs
        // The order of positions is from the left most square of row 1 "case 11" to the right most square of row 3 "case 33"
        // Checks whether turn number is even or odd to alternate printing "X" or "O"
        // if the player move is invalid compensates for the later adding to the turn counter by pre-emptively subracting 1
        switch (position) {
            case 11:
                if(row1[0] == " ") {
                    if (turn % 2 == 0) {row1[0] = "X";}
                    else {row1[0] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 12:
                if(row1[2] == " ") {
                    if (turn % 2 == 0) {row1[2] = "X";}
                    else {row1[2] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 13:
                if(row1[4] == " ") {
                    if (turn % 2 == 0) {row1[4] = "X";}
                    else {row1[4] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 21:
                if(row2[0] == " ") {
                    if (turn % 2 == 0) {row2[0] = "X";}
                    else {row2[0] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 22:
                if(row2[2] == " ") {
                    if (turn % 2 == 0) {row2[2] = "X";}
                    else {row2[2] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 23:
                if(row2[4] == " ") {
                    if (turn % 2 == 0) {row2[4] = "X";}
                    else {row2[4] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 31:
                if(row3[0] == " ") {
                    if (turn % 2 == 0) {row3[0] = "X";}
                    else {row3[0] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 32:
                if(row3[2] == " ") {
                    if (turn % 2 == 0) {row3[2] = "X";}
                    else {row3[2] = "O";}
                }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            case 33:
                if(row3[4] == " ") {
                    if (turn % 2 == 0) {row3[4] = "X";}
                    else {row3[4] = "O";}
                    }
                else {
                    turn = turn - 1;
                    std::cout << "\nInvalid move, try again: \n";}
                break;
            default:
                std::cout << "\nInvalid move, try again: \n";
                turn = turn - 1;
                break;

        }
        
        // Adds 1 to the turn counter 
        turn = turn + 1;

        // Prints current board so player can see the result of their move
        current_board();

        // Checks to see if the player move has resulted in a winning board state
        win_checks();

        // Prints draw and ends game by setting game_complete to true after 9 turns as the board will be full so no further moves will be possible
        if (win_check == false && turn == 10) {

            game_complete = true;
            std::cout << "\nIts a Draw!\n";
            
        }
    
    } while (game_complete == false && win_check == false); 

    }