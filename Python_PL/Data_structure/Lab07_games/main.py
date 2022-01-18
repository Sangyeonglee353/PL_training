from StonesGame import *
import tictactoeAI as ttt
from eightPuzzle import *
import time

def play8Puzzle():
    start = [
    [1, 0, 3],
    [4, 2, 5],
    [7, 8, 6]
    ]
    target = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 0]
    ]
    
    ep=EightPuzzle(start,target)


def playTTT():
    board = ttt.initial_state()
    
    ttt.print_board(board)
    game_over = ttt.terminal(board)
    player = ttt.player(board)

    while True:
        if not game_over:
            print ("It is turn for player", player)
            row, col = list(map(int, input("Enter row and column numbers: ").split()))
            if (board[row][col] == ttt.EMPTY):
                board = ttt.result(board, (row, col))
            else:
                print("Invalid Move...")
                continue
        ttt.print_board(board)
        game_over = ttt.terminal(board)
        player = ttt.player(board)

        if game_over:
            winner = ttt.winner(board)
            if winner is None:
                print(f"Game Over: Tie.")
            else:
                print(f"Game Over: {winner} wins.")
        
            return  

def playTTTai():
    board = ttt.initial_state()
    user = ttt.X

    ttt.print_board(board)
    game_over = ttt.terminal(board)
    player = ttt.player(board)

    while True:
        if player==user and not game_over:
            # Check for a user move
            row, col = list(map(int, input("User's Turn-> Enter row and column numbers: ").split()))
            if (board[row][col] == ttt.EMPTY):
                board = ttt.result(board, (row, col))
            else:
                print("Invalid Move...")
                continue


        else:
            print("Computer is Thinking........")
            time.sleep(2)
            row, col = ttt.minimax(board)
            print("Computer;s Move = ", (row, col))
            board = ttt.result(board, (row, col))


        ttt.print_board(board)
        game_over = ttt.terminal(board)
        player = ttt.player(board)

        if game_over:
            winner = ttt.winner(board)
            if winner is None:
                print(f"Game Over: Tie.")
            else:
                print(f"Game Over: {winner} wins.")
        
            return 


def main():
    #game1 = StonesGame()
    #game1.play()
    #playTTT()
    playTTTai()
    #play8Puzzle()

if __name__ == "__main__":
    main()