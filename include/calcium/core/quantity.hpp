/**
 * @file quantity.hpp
 * @author rixfxol (jf_espiritu.fa@outlook.ph)
 * @brief The declaration file for the quantity class.
 * 
 * This file contains the declaration for a @ref quantity. A
 * @ref quantity is a node for an @ref expression that abstracts
 * a function operation and a @ref number or variable.
 */

#ifndef INCLUDE_CALCIUM_CORE_QUANTITY_HPP
#define INCLUDE_CALCIUM_CORE_QUANTITY_HPP

//Standard Library
#include <vector>
#include <string>

//Source Includes
#include "calcium/core/number.hpp"
#include "calcium/core/concepts.hpp"

namespace calcium
{    
    //Appended alias to macros.
    namespace macros
    {
        typedef calcium::quantity functional;
    };
    
    /**
     * @brief The @ref quantity class.
     * 
     * The quantity class 
     */
    class quantity
    {
        //Member Variables
        calcium::number q_num;
        
        
    };
};

#endif