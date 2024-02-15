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
#include <queue>
#include <string>

//Source Includes
#include "calcium/core/translator.hpp"

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
        //Container Types
        is_empty_or_head,                       //Container Quantity
        is_function_of,                         //Function Definition Quantity
     
        //Numerical (Definition) Types
        is_number,                              //Definite Numerical Quantity
        is_number_constant,                     //Defined Constant Quantity 
        is_variable,                            //Representative Numerical Quantity
        is_unit_of,

        //Basic Operator Types
        is_addend_to,
        is_subtrahend_to,
        is_multiplicand_to,
        is_divisor_to,
        is_nthroot,
        is_nthpower,
        is_nthlogarithm,

        //Intermediate Operator Types
        is_derivative_of,
        is_antiderivative_of,

        //Advanced Operator Types
        is_laplace_transform_of,
        is_inverse_laplace_transform_of,
    };

    /**
     * @brief Quantity class.
     * 
     */
    class quantity
    {
        //Member Variables
        std::queue<quantity*> child_quantities;
        quantity_type type;
        std::wstring quantity_value;
        
        //Friend Classes
        friend calcium::cli::translator;

        //Private Methods
        bool clean();

        public:
            //Constructor
            quantity();

            //Destructor
            ~quantity();
            
            //Accessor Methods

  
    };
};


#endif