# HanoiTower
##Example Outputs
Run 1 (Showcases the correctness of the solveHanoi() recursive
function):

How many disks: 1
Invalid Option (2-6)
How many disks: 8
Invalid Option (2-6)
How many disks: 3
Would you like to see the optimal solution?
y

Move disk 1 from 1 to 3
Move disk 2 from 1 to 2
Move disk 1 from 3 to 2
Move disk 3 from 1 to 3
Move disk 1 from 2 to 1
Move disk 2 from 2 to 3
Move disk 1 from 1 to 3

Tower 1:
  *|*  
 **|** 
***|***
-------
Tower 2:
   |
   |
   |
-------
Tower 3:
   |
   |
   |
-------

Remove from tower 1
Add to tower 3
Tower 1:
   |
 **|** 
***|***
-------
Tower 2:
   |
   |
   |
-------
Tower 3:
   |
   |
  *|*  
-------

Remove from tower 2
Add to tower 3
Invalid Move
Tower 1:
   |
 **|** 
***|***
-------
Tower 2:
   |
   |
   |
-------
Tower 3:
   |
   |
  *|*  
-------

Remove from tower 1
Add to tower 2
Tower 1:
   |
   |
***|***
-------
Tower 2:
   |
   |
 **|** 
-------
Tower 3:
   |
   |
  *|*  
-------

Remove from tower 3
Add to tower 2
Tower 1:
   |
   |
***|***
-------
Tower 2:
   |
  *|*  
 **|** 
-------
Tower 3:
   |
   |
   |
-------

Remove from tower 1
Add to tower 3
Tower 1:
   |
   |
   |
-------
Tower 2:
   |
  *|*  
 **|** 
-------
Tower 3:
   |
   |
***|***
-------

Remove from tower 2
Add to tower 1
Tower 1:
   |
   |
  *|*  
-------
Tower 2:
   |
   |
 **|** 
-------
Tower 3:
   |
   |
***|***
-------

Remove from tower 2
Add to tower 3
Tower 1:
   |
   |
  *|*  
-------
Tower 2:
   |
   |
   |
-------
Tower 3:
   |
 **|** 
***|***
-------

Remove from tower 1
Add to tower 3

Tower 1:
   |
   |
   |
-------
Tower 2:
   |
   |
   |
-------
Tower 3:
  *|*  
 **|** 
***|***
-------

Winner! Moves made: 7
--------------------------------

Run 2 (Showcases the functionality of running a larger set):

How many disks: 1
Invalid Option (2-6)
How many disks: 89
Invalid Option (2-6)
How many disks: 213
Invalid Option (2-6)
How many disks: 4
Would you like to see the optimal solution?
y

Move disk 1 from 1 to 2
Move disk 2 from 1 to 3
Move disk 1 from 2 to 3
Move disk 3 from 1 to 2
Move disk 1 from 3 to 1
Move disk 2 from 3 to 2
Move disk 1 from 1 to 2
Move disk 4 from 1 to 3
Move disk 1 from 2 to 3
Move disk 2 from 2 to 1
Move disk 1 from 3 to 1
Move disk 3 from 2 to 3
Move disk 1 from 1 to 2
Move disk 2 from 1 to 3
Move disk 1 from 2 to 3

Tower 1:
   *|*   
  **|**  
 ***|*** 
****|****
---------
Tower 2:
    |
    |
    |
    |
---------
Tower 3:
    |
    |
    |
    |
---------

Remove from tower 1
Add to tower 2
Tower 1:
    |
  **|**  
 ***|*** 
****|****
---------
Tower 2:
    |
    |
    |
   *|*   
---------
Tower 3:
    |
    |
    |
    |
---------

Remove from tower 1
Add to tower 3
Tower 1:
    |
    |
 ***|*** 
****|****
---------
Tower 2:
    |
    |
    |
   *|*   
---------
Tower 3:
    |
    |
    |
  **|**  
---------

Remove from tower 2
Add to tower 1
Tower 1:
    |
   *|*   
 ***|*** 
****|****
---------
Tower 2:
    |
    |
    |
    |
---------
Tower 3:
    |
    |
    |
  **|**  
---------

Remove from tower 3
Add to tower 2
Tower 1:
    |
   *|*   
 ***|*** 
****|****
---------
Tower 2:
    |
    |
    |
  **|**  
---------
Tower 3:
    |
    |
    |
    |
---------

Remove from tower 1
Add to tower 2
Tower 1:
    |
    |
 ***|*** 
****|****
---------
Tower 2:
    |
    |
   *|*   
  **|**  
---------
Tower 3:
    |
    |
    |
    |
---------

Remove from tower 3
Add to tower 2
Invalid Move
Tower 1:
    |
    |
 ***|*** 
****|****
---------
Tower 2:
    |
    |
   *|*   
  **|**  
---------
Tower 3:
    |
    |
    |
    |
---------

Remove from tower 1
Add to tower 2
Invalid Move
Tower 1:
    |
    |
 ***|*** 
****|****
---------
Tower 2:
    |
    |
   *|*   
  **|**  
---------
Tower 3:
    |
    |
    |
    |
---------

Remove from tower 1
Add to tower 3
Tower 1:
    |
    |
    |
****|****
---------
Tower 2:
    |
    |
   *|*   
  **|**  
---------
Tower 3:
    |
    |
    |
 ***|*** 
---------

Remove from tower 2
Add to tower 1
Tower 1:
    |
    |
   *|*   
****|****
---------
Tower 2:
    |
    |
    |
  **|**  
---------
Tower 3:
    |
    |
    |
 ***|*** 
---------

Remove from tower 2
Add to tower 3
Tower 1:
    |
    |
   *|*   
****|****
---------
Tower 2:
    |
    |
    |
    |
---------
Tower 3:
    |
    |
  **|**  
 ***|*** 
---------

Remove from tower 1
Add to tower 3
Tower 1:
    |
    |
    |
****|****
---------
Tower 2:
    |
    |
    |
    |
---------
Tower 3:
    |
   *|*   
  **|**  
 ***|*** 
---------

Remove from tower 1
Add to tower 2
Tower 1:
    |
    |
    |
    |
---------
Tower 2:
    |
    |
    |
****|****
---------
Tower 3:
    |
   *|*   
  **|**  
 ***|*** 
---------

Remove from tower 3
Add to tower 1
Tower 1:
    |
    |
    |
   *|*   
---------
Tower 2:
    |
    |
    |
****|****
---------
Tower 3:
    |
    |
  **|**  
 ***|*** 
---------

Remove from tower 3
Add to tower 2
Tower 1:
    |
    |
    |
   *|*   
---------
Tower 2:
    |
    |
  **|**  
****|****
---------
Tower 3:
    |
    |
    |
 ***|*** 
---------

Remove from tower 1
Add to tower 2
Tower 1:
    |
    |
    |
    |
---------
Tower 2:
    |
   *|*   
  **|**  
****|****
---------
Tower 3:
    |
    |
    |
 ***|*** 
---------

Remove from tower 3
Add to tower 1
Tower 1:
    |
    |
    |
 ***|*** 
---------
Tower 2:
    |
   *|*   
  **|**  
****|****
---------
Tower 3:
    |
    |
    |
    |
---------

Remove from tower 2
Add to tower 3
Tower 1:
    |
    |
    |
 ***|*** 
---------
Tower 2:
    |
    |
  **|**  
****|****
---------
Tower 3:
    |
    |
    |
   *|*   
---------

Remove from tower 2
Add to tower 1
Tower 1:
    |
    |
  **|**  
 ***|*** 
---------
Tower 2:
    |
    |
    |
****|****
---------
Tower 3:
    |
    |
    |
   *|*   
---------

Remove from tower 3
Add to tower 1
Tower 1:
    |
   *|*   
  **|**  
 ***|*** 
---------
Tower 2:
    |
    |
    |
****|****
---------
Tower 3:
    |
    |
    |
    |
---------

Remove from tower 2
Add to tower 3
Tower 1:
    |
   *|*   
  **|**  
 ***|*** 
---------
Tower 2:
    |
    |
    |
    |
---------
Tower 3:
    |
    |
    |
****|****
---------

Remove from tower 1
Add to tower 3
Tower 1:
    |
    |
  **|**  
 ***|*** 
---------
Tower 2:
    |
    |
    |
    |
---------
Tower 3:
    |
    |
   *|*   
****|****
---------

Remove from tower 1
Add to tower 2
Tower 1:
    |
    |
    |
 ***|*** 
---------
Tower 2:
    |
    |
    |
  **|**  
---------
Tower 3:
    |
    |
   *|*   
****|****
---------

Remove from tower 3
Add to tower 2
Tower 1:
    |
    |
    |
 ***|*** 
---------
Tower 2:
    |
    |
   *|*   
  **|**  
---------
Tower 3:
    |
    |
    |
****|****
---------

Remove from tower 1
Add to tower 3
Tower 1:
    |
    |
    |
    |
---------
Tower 2:
    |
    |
   *|*   
  **|**  
---------
Tower 3:
    |
    |
 ***|*** 
****|****
---------

Remove from tower 2
Add to tower 1
Tower 1:
    |
    |
    |
   *|*   
---------
Tower 2:
    |
    |
    |
  **|**  
---------
Tower 3:
    |
    |
 ***|*** 
****|****
---------

Remove from tower 2
Add to tower 3
Tower 1:
    |
    |
    |
   *|*   
---------
Tower 2:
    |
    |
    |
    |
---------
Tower 3:
    |
  **|**  
 ***|*** 
****|****
---------

Remove from tower 1
Add to tower 3

Tower 1:
    |
    |
    |
    |
---------
Tower 2:
    |
    |
    |
    |
---------
Tower 3:
   *|*   
  **|**  
 ***|*** 
****|****
---------

Winner! Moves made: 25
--------------------------------

Run 3 (Showcases the functionality of the error cases and "valid 
moves taken" addition):

How many disks: 2
Would you like to see the optimal solution?
f

Invalid Input

Would you like to see the optimal solution?
f

Invalid Input

Would you like to see the optimal solution?
a

Invalid Input

Would you like to see the optimal solution?
1

Invalid Input

Would you like to see the optimal solution?
N

Tower 1:
 *|* 
**|**
-----
Tower 2:
  |
  |
-----
Tower 3:
  |
  |
-----

Remove from tower 3
Add to tower 2
Invalid Move
Tower 1:
 *|* 
**|**
-----
Tower 2:
  |
  |
-----
Tower 3:
  |
  |
-----

Remove from tower 2
Add to tower 1
Invalid Move
Tower 1:
 *|* 
**|**
-----
Tower 2:
  |
  |
-----
Tower 3:
  |
  |
-----

Remove from tower 21
Add to tower 32
Invalid Move
Tower 1:
 *|* 
**|**
-----
Tower 2:
  |
  |
-----
Tower 3:
  |
  |
-----

Remove from tower 1
Add to tower 2
Tower 1:
  |
**|**
-----
Tower 2:
  |
 *|* 
-----
Tower 3:
  |
  |
-----

Remove from tower 1
Add to tower 2
Invalid Move
Tower 1:
  |
**|**
-----
Tower 2:
  |
 *|* 
-----
Tower 3:
  |
  |
-----

Remove from tower 1
Add to tower 3
Tower 1:
  |
  |
-----
Tower 2:
  |
 *|* 
-----
Tower 3:
  |
**|**
-----

Remove from tower 2
Add to tower 3

Tower 1:
  |
  |
-----
Tower 2:
  |
  |
-----
Tower 3:
 *|* 
**|**
-----

Winner! Moves made: 3
--------------------------------
