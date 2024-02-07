# general overview
- create a program that is able to open an existing input text file and take in 3 intergers and add them up. 
- also have the program take a string from the input file and print out the same string in a output file however number of times the 3 integers add up to.
- the output file should not be preexisting and should be created through the program and also be a text file that could be opened to view the end result.

# input file
## goals
- have 3 int in one line followed by a string in the other
- this is used through the main function to read the input file and transfer the data to the output
## input
- the input is preexisting and will not be edited in this program
## output
- none but the main function uses this data for an output
## steps
- put 3 comma seperated integers
- have a string of any kind

# output file
## goals
- have the result of the main function sending the data from the input file
## input
- the data from the input file will be transmitted into this file
## output
- no actual output but the main will output into this file
## steps
- this will not be preexisting, the main will create this file.

# main()
## goals
- have the prgram open an input text file and take in 3 intergers and add them up. 
-  have the program take a string from the input file and print out the same string in a output file however number of times the 3 integers add up to.
- create the output file and and transmit the data into this file 
## input
- no actual input, but will take in the input from the input.txt file
## output
- the output will be the string from the input file however number of times the ints above the string add up to.
- they will be comma separated
## steps
- include the iostream, fstream, sstream, and string libraries
- introduce the main function
-- introduce and open both input and output files
-- create an error message to make sure the files are opening 
-- create a string to read the input file
-- create while loop that keeps going until their is nothing left to read in the input file
-- initialize and take in the input from the input file
-- create an int array to hold the numbers 
-- set a delimiter to hold the commas from the input
-- send the input into the array
-- create a for loop to go through all 3 of the numbers from the input file
-- have the for loop remove the commas from the array to keep the numbers only
-- create for loop to go through all 3 of the numbers from the input file
-- add up all of the numbers in the line
-- create a string for reading the text lines from the input
-- get the text line from the input text
-- initializes the output
-- sends the data to the output stream
-- create for loop to repeat the number of the multiplier times
-- put a comma between the text
-- sends the stream to the output and creates a new line
-- ends while loop
-- close the input and output files and end the main
