/**
 * @file translator.hpp
 * @author rixfxol (jf_espiritu.fa@outlook.ph)
 * @brief The declaration file for the translator abstract class.
 * 
 * The translator is the converter between various input formats
 * to the program's understood quantity heap structure and vice
 * versa. 
 */

//Standard Library
#include <string>

//Source Includes
#include "calcium/quantity.hpp"

#ifndef INCLUDE_TRANSLATOR_HPP
#define INCLUDE_TRANSLATOR_HPP

namespace calcium
{
    /**
     * @brief The Translator Base Class/Interface.
     *  
     */
    class translator
    {
        public:
            //Member Variables
            calcium::quantity mathematical_statement;

            //Processor Functions
            virtual void translate(std::string statement);
            virtual std::string translate();
    };

    //Translator Types
    class key_semantic_translator : public translator {};
    class latex_translator : public translator {};
    
    //Conversion Types
    class prefix_converter : public translator {};
    class postfix_converter : public translatorr {};
};

#endif