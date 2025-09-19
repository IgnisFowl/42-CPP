#include <iostream>
#include <string>
#include <fstream>

void    replaceAllOccurrences(std::string& content, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos) {
        result.append(content, pos, found - pos);
        result += s2; //concatenates string
        pos = found + s1.length();
    }
    result.append(content, pos, content.length() - pos);
    content = result;
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::string filename = argv[1];
    const std::string s1 =  argv[2];
    const std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot me empty." << std::endl;
        return (1);
    }

    std::ifstream input(filename.c_str());
    if (!input) {
        std::cerr << "Error: cannot open file " << filename << std::endl;
        return (1);
    }
    /*This declares an ifstream object named input.
    The constructor takes a C-style string (null-terminated char array) representing the file path to open.
    In C++98, std::ifstream constructor takes const char* for filenames — not std::string.
    Hence, we use filename.c_str() to convert std::string to const char*.*/

    std::string content;
    std::string line;
    while (std::getline(input, line)) {
        content += line + "\n";
    }
    input.close();

    /*Reads file line by line (std::getline) into line.
    Appends each line + newline \n to content string.*/
    
    if (!content.empty() && content[content.length()-1] == '\n'){
        content.erase(content.length() -1 );
    }

    replaceAllOccurrences(content, s1, s2);

    std::string outFilename = filename + ".replace";
    std::ofstream output(outFilename.c_str()); //opens and output file stream for writing
    if (!output) {
        std::cerr << "Error: cannot open output file " << outFilename << std::endl;
        return (1);
    }

    output << content; //writes modified content
    output.close();
    return (0);
}