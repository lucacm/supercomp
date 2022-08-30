#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
     // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile(argv[1]);

    char delim = ' ';
    vector<string> vec;

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText, delim)) {
        // Output the text from the file
        vec.push_back(myText);
        // cout << myText << "\n";
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\n";
    }

    // cout << "::" << vec.back() << "::\n";

    // Close the file
    MyReadFile.close(); 

}
