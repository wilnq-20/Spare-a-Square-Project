# Spare-a-Square-Project
 Restrooms are equipped with two rolls of toilet paper so that when one is empty there will be a back-up. 
 The one closest to the patron will be called roll1 and the other roll2. 
 Initially each roll starts with N squares and patrons invariably fall into two groups: 
 
 1. big-roll choosers (always pick squares from the bigger roll) with probability, p, 
 2. little-roll choosers (always pick squares from the smaller roll) with probability, 1-p. [Assume if the rolls are of the same size, patrons pick the closest (i.e. roll1).] Assume each patron uses (unrealistically) only 1 square each.

The goal of this program is to compute the average size of the non-empty roll (i.e. how many squares are left on the non-empty roll) at the moment the other roll becomes empty. This is important to know since we desire that there is plenty left on the other roll. We could try to solve this problem analytically as a function of p and N (the starting size of both rolls) but it becomes complex quickly. Thus, we can use a program to compute the solution.
