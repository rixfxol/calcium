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
#include <vector>
#include <string>

//Source Includes
#include "calcium/core/translator.hpp"

namespace calcium
{
    /**
     * @brief Enumeration for Quantity Type
     * 
     * The quantity_type enumeration defines the
     * type in which to consider the quantity as.
     */
    enum class quantity_type
    {
        //Default Types
        is_number,
        is_number_constant,
        is_variable,

        //Container Type
        is_container,
        is_function
    };
    
    /**
     * @brief Enumeration for Quantity Relationship.
     * 
     * The quantity_relationship enumeration defines the available
     * methods which declare the relationship of the child
     * quantity to the parent quantity. Check the documentation
     * to see which operations are already implemented.
     */
    enum class quantity_relationship
    {
        //Container Relationship (Head Node)
        is_head,                                //Primary Container Quantity
     
        //Attachment Quantities
        is_unit_of,

        //Basic Operators
        is_addend_to,
        is_subtrahend_to,
        is_multiplicand_to,
        is_divisor_to,
        is_nthroot,
        is_nthpower,
        is_nthlogarithm,

        //Intermediate Operators
        is_derivative_of,
        is_antiderivative_of,

        //Advanced Operators
        is_laplace_transform_of,
        is_inverse_laplace_transform_of,
    };

    /**
     * @brief Quantity class.
     * 
     * The quantity class is a heap-like structure which encapsulates
     * an entire mathematical statement or expression. This class is used
     * to easily evaluate the underlying parenthetically enclosed quantities.
     */
    class quantity
    {
        //Member Variables
        quantity* parent_node;
        quantity_type node_type;
        quantity_relationship node_rel_to_parent;
        
        std::string quantity_value;
        std::vector<quantity*> child_nodes;
        

        //Private Methods

        /**
         * @brief 
         * 
         */
        bool clean();

        public:
            //Structors
            quantity();
            ~quantity();
            
            //Iterators
            class ascending_iterator
            {
                
            };

            class descending_iterator
            {
                
            };

            //Accessor Methods
            
  
    };
};

#endif