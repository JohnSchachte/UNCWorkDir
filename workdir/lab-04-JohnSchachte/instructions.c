// PID: 730531580
// I pledge the COMP 211 honor code.
#include <stdint.h>
#include <stdlib.h>

#include "bit_utils.h"
#include "instructions.h"

// ------------------------------------
// Function implementation that determines whether you are
// working with an R type or I type instruction
//
// Arguments:	an unsigned 32-bit integer
//
// Return:      instruction_type: R_TYPE or I_TYPE (see instructions.h)
//
instruction_type get_type_of_instruction(uint32_t instruct){
    // TODO
    // convert unsigned32_t into binary
    // Read first 6 bits
    // if all 0's then R-Type
    // Else return I-Type
    if(bit_select(instruct,OPCODE_START_BIT,OPCODE_END_BIT) == 0){
        return R_TYPE;
    }
    return I_TYPE;
} // end get_type_of_instruction() function
// ------------------------------------
// Function implementation that creates an R-type instruction
// based on the integer given (see instructions.h)
//
// Arguments:	an unsigned 32-bit integer
//
// Return:      a pointer to an r_instruction (see instructions.h).
//              This consists of the following structure members
//              you will have to set: rs, rt, rd, shamt, func
//
r_instruction *create_r_instruction(uint32_t instruct){
    /**
     *  TODO
     * create a switch case for i_type and r_type
     * construct the correct struct
     * return malloc of created struct
     */
    r_instruction *ptr = (r_instruction*) malloc(sizeof(r_instruction));
    ptr->rs = bit_select(instruct,RS_START_BIT,RS_END_BIT);
    ptr->rt = bit_select(instruct,RT_START_BIT,RT_END_BIT);
    ptr->rd = bit_select(instruct,RD_START_BIT,RD_END_BIT);
    ptr->shamt = bit_select(instruct,SHAMT_START_BIT,SHAMT_END_BIT);
    ptr->func = bit_select(instruct,FUNC_START_BIT,FUNC_END_BIT);
    return ptr;
} // end create_r_instruction() function

// ------------------------------------
// Function implementation that creates an I-type instruction
// based on the integer given (see instructions.h)
//
// Arguments:	an unsigned 32-bit integer
//
// Return:      a pointer to an i_instruction (see instructions.h).
//              This consists of the following structure members
//              you will have to set: opcode, rs, rt, immediate
//
i_instruction *create_i_instruction(uint32_t instruct){
    /**
     *  TODO
     * create ptr then use -> to assign the attributes of the struct
     * return malloc of created struct
     */
    i_instruction *ptr = (i_instruction*) malloc(sizeof(i_instruction));
        ptr->rs = bit_select(instruct,RS_START_BIT,RS_END_BIT);
        ptr->rt = bit_select(instruct,RT_START_BIT,RT_END_BIT);
        ptr->opcode = bit_select(instruct,OPCODE_START_BIT,OPCODE_END_BIT);
        ptr->immediate = bit_select(instruct,IMMEDIATE_START_BIT,IMMEDIATE_END_BIT);
    return ptr;
} // end create_i_instruction() function
