/*
 * Persistence Library / Collections / TSortedDictionary
 *
 * Copyright (c) 2016 Ondrej Sterba <osterba@inbox.com>
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

#ifndef TDICTIONARY___H
#define TDICTIONARY___H

#include <stdlib.h>
#include "TIterator.h" 

/**
 *  TSortedDictionary stores key-value pairs. Internally it sorts all inserted data,
 *  therefore Find methods can use binary search algorithm that is much faster than
 *  ordinary TDictonary object.
 *
 *  It allocates memory dynamically, but it preallocates a bit more memory than 
 *  it is needed to decrease memory fragmentation.
 */
template <typename KEY, typename VALUE> class TSortedDictionary 
{

private:
    KEY*   m_keyArray;
    VALUE* m_valueArray;
    short  m_dataCount;
    short  m_dataMaxCount;
	short  m_dataIterator;

    short  SetCount(short count);
    void   SetCapacity(short capacity);
    bool   InsertKey(short index, KEY key);

    short FindKeyIndexRec(KEY key, short min, short max);   
	short FindNearestKeyIndex(KEY key);

    TSortedDictionary(TSortedDictionary<KEY,VALUE> &dictionary);

public:

    TSortedDictionary(short capacity=8);    
    ~TSortedDictionary();

    void  Clear();    
    short Capacity();    

    VALUE& operator [] (KEY key);
	
	KEY&  Keys(int index);

    short Count();	
	
    bool  ContainsKey(KEY key);
	short FindKeyIndex(KEY key);
    
};

#include "TSortedDictionary.cpp"

#endif

