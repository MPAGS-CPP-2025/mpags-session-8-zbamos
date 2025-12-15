#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

/**
 * \file ProcessCommandLine.hpp
 * \brief Contains the declaration of the function for processing the command-line arguments
 */


/**
 * \brief Struct to hold program settings
 * 
 * \param helpRequested Indicates the presence of the help flag in the arguments
 * \param versionRequested Indicates the presence of the version flag in the arguments
 * \param inputFile Name of the input file
 * \param outputFile Name of the output file
 * \param cipherKey Key to be used in encrypting/decrypting routine
 * \param encrypt Flag indicating the mode in which the cipher should run (encrypt = true, decrypt = false)
 */
struct ProgramSettings {
    bool helpRequested;
    bool versionRequested;
    std::string inputFile;
    std::string outputFile;
    std::string cipherKey;
    bool encrypt = true;
};

/**
 * \brief Processes the command-line arguments and modifies accordingly the program settings
 *
 * \param cmdLineArgs The command-line arguments to be processed
 * \param settings instance of ProgramSettings struct
 * \return true if the arguments could be successfully parsed, false otherwise
 */

bool processCommandLine(const std::vector<std::string>& cmdLineArgs, ProgramSettings& settings);



#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
