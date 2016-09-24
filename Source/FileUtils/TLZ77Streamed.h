/*
 * Persistence Library / FileUtils / TLZ77Streamed
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


#ifndef LZ77COMPRESSION___H
#define LZ77COMPRESSION___H

#include "tstream.h"
#include "tcachedstream.h"

//magic byte should be the least used value.
//wrong value can have a negative impact on
//compression ratio
#define LZ77_MAGIC_BYTE 0xBF

class TLZ77Streamed : public TCachedStream
{
    private:
        unsigned char* FSlidingWindow;
        short FSlidingWindowSize;
        short FSlidingWindowMaxSize;
        short FReadingBlockOffset;
        short FReadingBlockLength;

	protected:
        bool DoReadOperation();
        bool DoWriteOperation();
        void MoveSlidingWindow();
        void StorePattern(short offset, short length);
        void StoreByte(unsigned char b);

    public:

        TLZ77Streamed(TStream* mainStream, void* slidingWindowAndCache, int cacheSize, int slidingWindowSize);
        TLZ77Streamed(TStream* mainStream, int cacheSize=512, int slidingWindowSize=3584);

};


#endif