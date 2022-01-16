# EMPLOYEES-MANAGMENT-SYSTEM

*Note*we sent the 2d array "company" by passing it by reference
to all these functionalities , and some of them we sent the number
of branches, and others we sent the sum .
Moving from one functionality to the other happens by using the
switch chase as the user will have a menu of instructions printed
To perform any of them you should enter the instruction's number
So then each case calls the function which was predefined.
Functionality [1]: (enter _data):int type as to return the branch numbers
Aim: Allows the user to enter the sales data for all branches and for all months and store
them in a data structure(2d array)
*I have chosen a 2d array to track the sales of branches within the months
Steps :
1- First of all We ask the user to enter the number of branches of his company which will
be scanned & considered the rows in the 2d array & will be considered the number of
loops that we will take to perform the data entry process
2- Then we will scan the sales of 12 months for each using a for loop and using the variables
(I & j) which are integers.
3- Used variables : I , j ------> integer data type
(I used this data type as it is a simple counter which needn't to be a decimal).
4- Float company [] [] --------> a 2d array to store the sales which is float as the sales may
be decimal numbers
Functionality [2] : (add _branch) : has a void data type as we have nothing to
be returned out of it
Aim: to add a new branch to be used as the predefined branches to track the sales of
the new branch within the others throughout the whole year
Steps:
1-first of all going through a for loop to check our actual branches which
the user inputted. If the for loop reached the empty places , which are
reserved through which we will add the branches.
2-then going through another for loop after we reached the first empty
row . we will start another for loop to input the sales of the new branch
throughout all months the year .Then increasing the number of the
actual branches after ending the loop. To have the number of branches
always updated
3- Used variables : I,j------> integer data type
(I used this data type as it is a simple counter which needn't to be a decimal).
Functionality [3]:delete branch: has a void data type as we have nothing to be
returned out of it
Aim: to delete the sales of an existing branch
Steps:
1-we ask the user to enter the number of branches which will be considered the index which
we will use to reach the specific branch in the 2d array .
Handling a case :
2- I made an if condition to make sure that the user enters a correct number for the
branch he wants to delete by checking whether the number of branch is smaller than zero
(doesn't exist) or if it exceeds the number of the actual existing branches in this case we
will prompt the user a statement that tells him that he entered an invalid input
3-else if the condition is false and the branch already exists .( we will reach this branch
using the index , then will convert all the sales in this branch into zeros by passing over
them using a for loop
4-then I printed the branch after converting its values into zeros just for making sure that
we have correctly converted them
5-used variables: I as a counter to pass over the rows to point out to the needed one
another used variable is branch which is the number of index we will search for
branch 4 which be converted &printed as zeros to insure its deletion process

Functionality [4]:total sales :this function has a float data type as when
summing up all the sales the result may be a decimal , so then float is better as to get
a correct output .
Aim: to calculate the total sales of the company
Steps :
1-using a for loop to pass over all sales of the company tracking branch by branch then
tracking all its cells by making another for loop that passes over the number of months.
2-for each cell we pass over we add it to a premade variable which is sum
3- then we will print the sum for the user , and it will be returned to be used in the
upcoming functionalities
Used variables &their data types:
a --->integer , considered to be a counter that loops on all the branches
b-------> integer , considered to be a counter that loops on all the months
sum--------> float , as it may include some decimal sales
printing the total sales of the company

Functionality [5]:branch share :it has a void data type as we need nothing to
be returned out of it
Aim: to calculate the percentage share for each branch
Steps :
1- First of all we returned the sum &the 2d array to be used in this function
Handling error:
2- We asked the user to enter his actual number of branches handling the error that
the branch number was always undeclared
3- Going through a for loop to track all the rows(branches) nested in another one to pass
over each branch summing up all its sales
4- The percentage share is calculated using this equation

The issued shares represent the sum of each branch which we have already got
The authorized shares represent the total sales ,that's why we have returned the sum
from the last function then multiplying the result by 100 to get the percentage
5-then we print the shares of each branch performing all this loop as long as the number
of branches &months for each hasn't exceeded their limit .*note* we added the value of
row by 1 as its initial value is 0 , and branches index should start from 1.
 Used variables &their data types:
row--->integer , considered to be a counter that loops on all the branches
j--->integer , considered to be a counter that loops on all the branches
index--->integer , through which we will scan &store the number of actual branches to be
used as a limit in the for loop .
sum_of_branches------>float , as it is used for summing up all the branch sales which may
be decimal.
Percent----------->float ,as it will get the percentage share for decimal sales.

Functionality [6]:peak sales :
Aim: to calculate the highest score for sales in months .
Steps:
1- we used a for loop to pass on all months nested in it another one which passes on all
branches and checks whether the branch has zeros or not if so , then will not go
through this branch ,to calculate the totals sales for each branch .
*Note*These zero branches are left for adding any new branches for the company
2-the total will be compared to a maximum value. If it was greater than the maximum .
so then the maximum value will be updated by the new one .
3-the index which points to the branch which has the max value will be considered a flag
which will be printed with highest in the print statement .
Variables &their data types:
a --->integer , considered to be a counter that loops on all the months
b--->integer , considered to be an argument or a parameter that loops on all the branches
flag--->integer , which will be used to print the counter or the branch number
max------>float , as it is used for storing the max value of sales which may be decimal
The program calculated the peak sales between all months.

Functionality [7]:bubble sorting :void as we need nothing to be
Returned out of it
Aim: we need to choose a specific month a track all the sales of all branches in
this month .
Steps:
1-first of all we ask the user to enter the month which must have its sales
sorted by descending order and will be scanned and stored to point to the
month which the user wanted to sort .
2-then will go through a for loop that will pass over all rows (branches ) of the
2d array nested in it another one which tracks the months of the year . in order
to scan this array in another one(copy of the array)
Handling error:
After sorting the array once , if you tried printing it once more it will appear
with a different wrong index (1,2,3,4) ;As it has already been sorted so after that
it will appear with a normal index as it is sorted correctly in an ascending
order , as the index is dependent upon the sorting once you have finished
your first sorting operation for the month ,That's why : I made a new array and
will be using it while sorting to prevent having a wrong index when printing it again
The biggest number will be printed first and the rest will be printed then in a
descending order
Used variables &their data types:
I&j-----> integer , considered to be a counters that loop on all the months branches
Branch_index----->integer which will store index for all available places in the array
Temp_1----->integer, will be a copy of the array of index which was integer
Temp_2----->float, will be a copy of the sales array
The user have chosen a specific month to have its sales sorted between all branches
Functionality [8]: selection sorting: its data type is void as we need
to get nothing out of it
Aim: we should allow the user to choose a specific branch which he wanted
its sales to be sorted in a descending order
Steps:
1-first of all we declared an array which include numbers of months which will be
used then to track the index in order to handle the error we mentioned in the
last functionality.
2-then we asked the user to input which branch he wants to get it sorted
3-going through a 2 nested for loop to track all branches , to copy it in
another array .
4-then going through a second nested loop to store the 2d array in replace-1 &
replace 2 in order to handle the same error we faced in last functionality ,
to prevent having the index while you have already sorted it with a wrong
&in correct arrangement of index .
5- Then printing the branch with its months with a correct indices.
Used variables &their data types :
 I&j-----> integer , considered to be a counters that loop on all the months& branches
months_index----->integer which will store index for all months to be printed then
replace_1----->float, will be a copy of the sales array which may be decimal
Temp_2----->integer, will be a copy of the month indices. So needn't to be float
Copy ----->float, will be a copy of the 2d_array which may be decimal
The user have chosen a specific branch to display its sales sorted

Functionality [9]:printing matrix: has a void data type as we need
nothing to be returned out of it ,
Aim: to print the matrix or the 2d_array (all sales of company )
Steps :
1- By going through a nested for loop one to pass over all available
branches & the other to pass over the months
2- So that we could print all sales of all months and all branches
3- .1f is used as we are printing float numbers . so that the array
wouldn't be full of decimal zeros which must be rejected while
performing these operations.
Used variables &their data types:
I&j-----> integer , considered to be a counters that loop on all the months&
branches
The user prints all the sales to make sure that adding
and deleting a branch is going well
