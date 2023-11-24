// #include <iostream>
// #include <string>
// using namespace std;

// class Printer {
// private:
//     int availablePages;
//     string name;

// public:
//     Printer(string name, int availablePages) {
//         this->availablePages = availablePages;
//         this->name = name;
//     }

//     void print(string content) {
//         int requiredPages = content.length() / 5;
        
//         if (requiredPages > availablePages) {
//             // Throw an exception with an integer code to indicate insufficient pages.
//             throw 101;
//         } else {
//             cout << "Printing: " << content << endl;
//             availablePages -= requiredPages;
//         }
//     }
// };

// int main() {
//     Printer p1("hp", 5);
//     string content = "Mishan Dai";
    
//     try {
//         p1.print(content);
//         p1.print(content);
//         p1.print(content);
//     } catch (int x) {
//         // Handle the exception by displaying the error code.
//         cout << "Error: Insufficient pages (" << x << ")" << endl;
//     } catch (...) {
//         // Handle any other exceptions with a generic message.
//         cout << "Default handling: An error occurred." << endl;
//     }

//     p1.print(content);

//     return 0;
// }
// #include <iostream>
// #include <fstream>

// using namespace std;

// int main() {
//     // Create an output file stream to write to the file
//     ofstream outFile("output.txt");

//     // Check if the file was successfully opened
//     if (!outFile) {
//         cerr << "Failed to open the file." << endl;
//         return 1;
//     }

//     // Write some text into the file
//     outFile << "Hello, this is a sample text written to a file." << endl;
//     outFile << "You can add more lines to this file as needed." << endl;

//     // Close the file when you're done
//     outFile.close();

//     cout << "Text written to the file successfully." << endl;

//     return 0;
// }
// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     // Name of the existing text file you want to open
//     string fileName = "example.txt";

//     // Create an input file stream to read the file
//     ifstream inputFile(fileName);

//     // Check if the file was successfully opened
//     if (!inputFile) {
//         cerr << "Failed to open the file: " << fileName << endl;
//         return 1;
//     }

//     // Read and display the contents of the file line by line
//     string line;
//     while (getline(inputFile, line)) {
//         cout << line << endl;
//     }

//     // Close the file when you're done
//     inputFile.close();

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     // Name of the text file you want to count lines in
//     string fileName = "mishan.txt";

//     // Create an input file stream to read the file
//     ifstream inputFile(fileName);

//     // Check if the file was successfully opened
//     if (!inputFile) {
//         cerr << "Failed to open the file: " << fileName << endl;
//         return 1;
//     }

//     int lineCount = 0;
//     string line;

//     // Read and count the lines in the file
//     while (getline(inputFile, line)) {
//         lineCount++;
//     }

//     // Close the file when you're done
//     inputFile.close();

//     cout << "Number of lines in the file: " << lineCount << endl;

//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Name of the source and destination text files
    string sourceFileName = "source.txt";
    string destinationFileName = "destination.txt";

    // Create an input file stream for the source file
    ifstream sourceFile(sourceFileName);

    // Check if the source file was successfully opened
    if (!sourceFile) {
        cerr << "Failed to open the source file: " << sourceFileName << endl;
        return 1;
    }

    // Create an output file stream for the destination file
    ofstream destinationFile(destinationFileName);

    // Check if the destination file was successfully opened
    if (!destinationFile) {
        cerr << "Failed to open the destination file: " << destinationFileName << endl;
        return 1;
    }

    string line;

    // Copy the contents of the source file to the destination file
    while (getline(sourceFile, line)) {
        destinationFile << line << endl;
    }

    // Close both files when you're done
    sourceFile.close();
    destinationFile.close();

    cout << "Contents copied from '" << sourceFileName << "' to '" << destinationFileName << "'." << endl;

    return 0;
}
