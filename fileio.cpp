#include <iostream> // Input/output stream
#include <fstream> // File stream
#include <string> // String
#include <sstream> // String stream

using namespace std;

int main() {
    ifstream inFile("input.txt"); // Open input file
    if (!inFile) { // Check if input file opened successfully
        cout << "Error: Unable to open input file." << endl;
        return 1;
    }

    ofstream outFile("output.txt"); // Open output file
    if (!outFile) { // Check if output file opened successfully
        cout << "Error: Unable to open output file." << endl;
        return 1;
    }

    string line; // Read line from input file
    while (getline(inFile, line)) { // Read each line from input file
        istringstream istream(line); // Initialize input string stream
        int numbers[3]; // Array to hold numbers
        char delimiter; // Delimiter to separate numbers
        istream >> numbers[0] >> delimiter >> numbers[1] >> delimiter >> numbers[2]; // Read numbers from line

        int multiplier = 0; // Initialize multiplier
        for (int a = 0; a < 3; a++) { // Calculate sum of numbers
            multiplier += numbers[a];
        }

        string stringLine; // Read text line from input
        getline(inFile, stringLine); // Read text line
        ostringstream ostream; // Initialize output string stream
        ostream << stringLine; // Write text line to output stream
        for (int c = 1; c < multiplier; c++) { // Repeat text line according to multiplier
            ostream << "," << stringLine; // Add comma-separated text line to output stream
        }

        outFile << ostream.str() << endl; // Write output stream to output file
    }

    inFile.close(); // Close input file
    outFile.close(); // Close output file
    return 0; // Return 0 to indicate successful execution
}
