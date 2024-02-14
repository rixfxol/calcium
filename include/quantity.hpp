/**
 * @file quantity.hpp
 * @author rixfxol (jf_espiritu.fa@outlook.ph)
 * @brief The declaration file for the quantity class.
 * 
 * This file contains the declaration for 'quantity'. A
 * 'quantity' is any possible representation of a number,
 * statement, variable, parenthetically-enclosed phrase, or
 * function. It is basically a container that may contain
 * containers or just a single value. 
 */

#ifndef INCLUDE_QUANTITY_HPP
#define INCLUDE_QUANTITY_HPP

//Standard Library


namespace calcium::cli
{
    /**
     * @brief Enumeration for Quantity Type.
     * 
     * The quantity_type enumeration defines the available
     * methods which declare the relationship of the child
     * quantity to the parent quantity.  
     */
    enum class quantity_type
    {
        is_empty,
        is_number,
        is_number_constant,
        
    };

    /**
     * @brief Quantity class.
     * 
     */
    class quantity
    {
        quantity_type type;
        
        public:
  
    };
};


#endif