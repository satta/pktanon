/**
 * Copyright (c) 2014, Institute of Telematics, Karlsruhe Institute of Technology.
 * 
 * This file is part of the PktAnon project. PktAnon is distributed under 2-clause BSD licence. 
 * See LICENSE file found in the top-level directory of this distribution.
 */

#ifndef PKTANON__ANON_RANDOMIZE_H
# define PKTANON__ANON_RANDOMIZE_H

#include "AnonPrimitive.h"

namespace pktanon
{

class AnonRandomize: public AnonPrimitive
{
public:
    AnonRandomize();
    virtual ~AnonRandomize();
protected:
    virtual ANON_RESULT anonymize_chain ( void* buf, unsigned int len ) const ;
    virtual ANON_RESULT anonymize_internal ( const void*const src_buff, void* dst_buff, unsigned int len ) const;
};

}

#endif // __ANON_RANDOMIZE_H
