# Bitwise
## Swapping Bits

### Problem Statement:  

Take a Number ( which is in the range of 2 power 32 ) that is of integer type. In that take two position source and destination 
from 1 to 32 which will swap the source bit and destination bit from the number.

  Example:
  
    Input:
      Number - 10
      Source - 1
      Destination - 2     
   
    Output:
      9

  Explanation:

     Number is 10 that means in binary
   
     00000000 00000000 00000000 00001010
     |      | |      | |      | ||||||||
     32    25 24    17 16     9 87654321
      
     Source position is 1,which is having bit 0.
     Destination position is 2, which is having bit 1.
     
     that bits should be swap as below
     
                                      0 1
                                      | | 
     00000000 00000000 00000000 0000101 0
     |      | |      | |      | ||||||| |
     32    25 24    17 16     9 8765432 1
      
     Then ouput will be:
     
     00000000 00000000 00000000 00001001
     
     that means in decimal is 9.
     
   Solution:
   
    Solution 1 refers to the logic which is with in the main function.
    
    Solution 2 refers to the logic which is in a user defined function that is swap_bit().
    
    Solution 3 refers to the logic which is a function Macro

