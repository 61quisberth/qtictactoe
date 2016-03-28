// TODO: header guards
#include <iostream>

struct player {
  const char mark;
  player(bool is_first) : mark(is_first? 'O' : 'X'){}
};

class board {
  public:
    board() {
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          data[i][j] ='_';
        }
      }
    }
  
    int print() {
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
      }
    
      return 0;
    }

    bool check_winner(char marker) {
      int winner_sum = int(marker) * 3;
      
      // checks crosses, then horizontals, then verticals
      return (data[0][0] + data[1][1] + data[2][2] == winner_sum  ||
              data[0][2] + data[1][1] + data[2][0] == winner_sum  ||
              data[0][0] + data[0][1] + data[0][2] == winner_sum  ||
              data[1][0] + data[1][1] + data[1][2] == winner_sum  ||
              data[2][0] + data[2][1] + data[2][2] == winner_sum  ||
              data[0][0] + data[1][0] + data[2][0] == winner_sum  ||
              data[0][1] + data[1][1] + data[2][1] == winner_sum  ||
              data[0][2] + data[1][2] + data[2][2] == winner_sum) ? true : false;
    }

    void mark_spot(int i, int j, char val) {
      // TODO: prevent out of bounds insertion
      data[i][j] = val;
    }
  private:
    char data[3][3];
};

class game {
  public:
    // player 1 is always first and X?
    game() : turn(1), p1(player(true)), p2(player(false)), game_over(false){}
    char player_move(int i, int j) {
      char ret_mark = 'F';
      if (!game_over) {
        if (turn % 2 == 0) {
          brd.mark_spot(i, j, p1.mark);
          game_over = brd.check_winner(p1.mark);
          ret_mark = p1.mark;
        }
        else {
          brd.mark_spot(i, j, p2.mark);
          game_over = brd.check_winner(p2.mark);
          ret_mark = p2.mark;
        }
        //if (game_over) {
        //  brd.print();
        //}
        turn++;
      }
      return ret_mark;
    } 
  private:
    int turn;
    player p1;
    player p2;
    bool game_over;
    board brd;
};
