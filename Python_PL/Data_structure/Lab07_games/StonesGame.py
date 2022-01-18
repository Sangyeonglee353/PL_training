import random
from stonegametree import *
class StonesGame:

    def play(self):
        # Generate a random amount of stones
        stones = random.randrange(15, 20)

        is_finished = False  # Signal when game is complete
        player_turn = 'A'  # Keep track of whos turn it is

        while not is_finished:
            # Print before we cancel loop. Prints at the ends that 1 stone is remaining
            print('\nPlayer', player_turn, 'turn :: ', stones, 'stones remain')
            if stones <= 1:
                break
            # Chck for a valid entry from the user
            valid_grab = False
            while not valid_grab:
                
                if player_turn == 'B':
                    player_grabs = self.callCheat(stones) # Create Tree node
                    print('Player Program grabed : ', player_grabs)
                else:
                    player_grabs = int(input('Pick a number 1, 2, or 3:  '))
                
                #player_grabs = int(input('Pick a number 1, 2, or 3:  '))
            
                if player_grabs >= 1 and player_grabs <= 3:
                    valid_grab = True
                else:
                    print('Invalid Entry, please try again')

            if player_turn == 'A':
                player_turn = 'B'
            
            else:
                player_turn = 'A'

            stones -= player_grabs

        if player_turn == 'A':
            print('\nCongradulations player B wins!')
        if player_turn == 'B':
            print('\nCongradulations player A wins!')

    def callCheat(self,stones_left):
    
        if stones_left == 5:
            return random.randrange(1, 4)
  
        elif stones_left < 5:
            return stones_left - 1
        else:
            new_cheat = GameTree()
            return new_cheat.run(stones_left, 1)





