/*
 * Persistence Library / Graphics / TFilter3x3
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

#ifndef TFILTER3X3___H
#define TFILTER3X3___H

class TFilter3x3
{

public:
	TFilter3x3();
	virtual ~TFilter3x3();
	signed char _11;
	signed char _12;
	signed char _13;
	signed char _21;
	signed char _22;
	signed char _23;
	signed char _31;
	signed char _32;
	signed char _33;
};

#endif 
