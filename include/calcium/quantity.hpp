/**
 * @file quantity.hpp
 * @author rixfxol (jf_espiritu.fa@outlook.ph)
 * @brief The declaration file for the quantity class.
 * 
 * This file contains the declaration for @ref quantity. A
 * @ref quantity is any possible representation of a number,
 * statement, variable, parenthetically-enclosed phrase, or
 * function. It is basically a container that may contain
 * containers or just a single value. 
 */

#ifndef INCLUDE_CALCIUM_QUANTITY_HPP
#define INCLUDE_CALCIUM_QUANTITY_HPP

//Standard Library
#include <vector>
#include <string>

//Source Includes
#include "calcium/core/translator.hpp"

namespace calcium
{
    /**
     * @brief Enumeration for @ref quantity type
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
     * @brief Enumeration for @ref quantity relationship.
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
        is_row_of,
        is_cell_of,
     
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
        is_nthderivative_of,
        is_nthantiderivative_of,

        //Advanced Operators
        is_laplace_transform_of,
        is_inverse_laplace_transform_of,

        //Complex Operators
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
        quantity_type type;
        quantity_relationship parent_relationship;
        
        std::string value;
        std::vector<quantity*> child_nodes;
        
        //Private Methods

        /**
         * @brief This method minimizes the quantity heap structure.
         * 
         * @return Returns true if successfully cleaned, false if the quantity
         * heap is already clean, and throws an exception if it fails to clean.
         */
        bool clean();

        public:
            //Structors
            quantity();
            ~quantity();
            
            //Iterators
            class ascending_iterator;            
            class descending_iterator;  

            //Accessor Class   
            class accessor;

    };
    
    /**
     * @brief The forward-ascending iterator.
     * 
     * This is the quantity iterator class which does ascending
     * breadth-first traversal of the quantity heap structure.
     */
    class quantity::ascending_iterator
    {
        public:
            using iterator_category = std::forward_iterator_tag;
            using value_type = quantity;
            using difference_type = std::ptrdiff_t;
            using pointer = quantity*;
            using reference = quantity&;

                
    };

    /**
     * @brief The forward-descending iterator.
     * 
     * This is the quantity iterator class which does descending
     * breadth-first traversal of the quantity heap structure.
     */
    class quantity::descending_iterator
    {
        public:
            using iterator_category = std::forward_iterator_tag;
            using value_type = quantity;
            using difference_type = std::ptrdiff_t;
            using pointer = quantity*;
            using reference = quantity&;

            
    };

    /**
     * @brief The private accessor class.
     * 
     * This is the accessor class which is the primary interface for
     * allowing which classes can immediately access the quantity
     * class' private members.
     */
    class quantity::accessor
    {
        /**
         * @brief The selection for quantity variables.
         * 
         * This enumeration allow to select what @ref quantity
         * variable the friend classes are allowed to access.
         */
        enum class quantity_data
        {
            node_parent,
            node_type,
            node_relationship,
            node_value,
            node_children,
        };

        //Friend Class Declaration
        friend calcium::key_semantic_translator;
        friend calcium::latex_translator;
        friend calcium::prefix_converter;
        friend calcium::postfix_converter;

        public:
            //Member Functions
            static auto io_data(quantity_data);
            static bool io_data(quantity_data, auto data);
    };


};

#endif