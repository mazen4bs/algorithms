# Task 1
Devise an algorithm for the following task: given a 2n × 2n
(n > 1) board with one missing square, tile it with right
trominoes of only three colors so that no pair of trominoes that share an edge have the same color. Recall that the
right tromino is an L-shaped tile formed by three adjacent squares.
Use dynamic programing to solve this problem.
# Task 2
Is it possible for a chess knight to visit all the cells of an 8 × 8 chessboard exactly once, ending at a cell one knight’s
move away from the starting cell? (Such a tour is called closed or re-entrant. Note that a cell is considered visited only
when the knight lands on it, not just passes over it on its move.)
If it is possible design a greedy algorithm to find the minimum number of moves the chess knight needs
# Task 3
There is a row of n security switches protecting a military installation entrance. The switches can be manipulated as
follows:
(i) The rightmost switch may be turned on or off at will.
(ii) Any other switch may be turned on or off only if the switch to its immediate right is on and all the other
switches to its right, if any, are off.
(iii) Only one switch may be toggled at a time.
Design a Dynamic Programing algorithm to turn off all the switches, which are initially all on, in the minimum number of
moves. (Toggling one switch is considered one move.) Also find the minimum number of moves. 
# Task 4
There are eight disks of different sizes and four pegs. Initially, all the disks are on the first peg in order of size, the largest
on the bottom and the smallest on the top.
Use divide and conquer method to transfer all the disks to another peg by a sequence of moves. Only one disk can be
moved at a time, and it is forbidden to place a larger disk on top of a smaller one.
Does the Dynamic Programing algorithm can solve the puzzle in 33 moves? If not then design an algorithm that
solves the puzzle in 33 moves.
# Task 7
A computer game has a shooter and a moving target. The shooter can hit any of n > 1 hiding spot located along a
straight line in which the target can hide. The shooter can never see the target; all he knows is that the target moves
to an adjacent hiding spot between every two consecutive shots. Design a Dynamic Programing algorithm that
guarantees hitting the target.
