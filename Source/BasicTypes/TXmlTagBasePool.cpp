/*
 * Persistence Library / Basic types / TXMLTagBasePool
 *
 * Copyright (c) 2007-2016 Ondrej Sterba <osterba@inbox.com>
 *
 * https://github.com/embedded-tools/PersistenceLibrary
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.
 * It is provided "as is" without express or implied warranty.
 *
 */

#include "txmltagbasepool.h"


void TXMLTagBasePool::SetXMLTagName(TXMLTag* tag, const char* tagName, TXMLTag* tagParent)
{
    tag->Name = tagName;
    tag->ParentTag = tagParent;
}

unsigned short TXMLTagBasePool::GetChildCount(TXMLTag* parentTag)
{
    unsigned short count = 0;
    unsigned short n = GetXMLTagCount();
    for(unsigned short i = 0; i<n; i++)
    {		
        TXMLTag* tag = GetXMLTag(i);
        if (tag->GetParentTag()!=parentTag) continue;
        count++;        
    }	
    return count;
}

TXMLTag* TXMLTagBasePool::GetChild(TXMLTag* parentTag, unsigned short index)
{
    unsigned short n = GetXMLTagCount();
    for(int i = 0; i<n; i++)
    {		
        TXMLTag* tag = GetXMLTag(i);
        if (tag->GetParentTag()!=parentTag) continue;
        if (index==0)
        {
            return tag;
        }
        index--;
    }	
    return NULL;
}






