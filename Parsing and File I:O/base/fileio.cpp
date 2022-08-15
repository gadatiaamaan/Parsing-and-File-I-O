// Parsing and File I/O (A5)
#include <iostream> // include input/output stream
#include <fstream> // include file stream
#include <string> // include string stream
#include <sstream> // include i/o string stream

int main() { // introduce the main function
  std::ifstream inFile; // introduce an input file
  inFile.open("input.txt"); // open the input file
  if ( !inFile ) { // if statement to make sure the input file is opening correctly
        std::cout << "input file not working" << std::endl;} // error for debugging

  std::ofstream outFile; // introduce an output file
  outFile.open("output.txt"); // open the output file
  if ( !outFile ) { // if statement to make sure the output file is opening correctly
        std::cout << "output file not working" << std::endl;} // error for debugging

  std::string line; // reading line from input file
  while (getline(inFile, line)) { // create while loop that keeps going until their is nothing left to read in the input file
    std::istringstream istream(line); // initializes and takes in the input from the input file
    int numbers[3]; // creates an int array to hold the numbers 
    char delimiter; // sets a delimiter to hold the commas from the input
    istream >> numbers[0]; // sends the input into the array
    int a = 1; // initializes the variable used
    int multiplier = 0; // initializes the variable used
    for ( a; a < 3; a++){ // for loop to go through all 3 of the numbers from the input file
      istream >> delimiter >> numbers[a];} // removes the commas from the array to keep the numbers only
       
    int b = 0; // initializes the variable used
    for ( b; b <= 2; b++){ // for loop to go through all 3 of the numbers from the input file
      multiplier += numbers[b];} // adds up all of the numbers in the line
//      std::cout << multiplier << std::endl;} // for debugging

    std::string stringLine; // reading the text lines from the input
    getline(inFile, stringLine); // gets the text line from the input text
    std::ostringstream ostream; // initializes the output
    ostream << stringLine; // sends the stringLine to the output stream
    int c = 1; // initializes the variable used
    for ( c; c < multiplier; c++){ // for loop to repeat the number of the multiplier times
      ostream << "," << stringLine;} // puts a comma between the text
    
    outFile << ostream.str() << std::endl;} // sends the stream to the output and creates a new line. Also ends while loop


  inFile.close(); // closes input file
  outFile.close(); // closes output file
  return 0; // standard return of 0 once program is done running
} // end main



