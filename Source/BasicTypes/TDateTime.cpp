/*
 * Persistence Library / Basic types / TDateTime
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

#include "TDateTime.h"

TDateTime::TDateTime(unsigned short year, unsigned char month, unsigned char day)
    : TDate(year, month, day), TTime(0, 0, 0)
{

}

TDateTime::TDateTime(unsigned short year, unsigned char month, unsigned char day, unsigned char hour, unsigned char minute, unsigned char second, unsigned short millisecond)
    : TDate(year, month, day), TTime(hour, minute, second)
{
    m_milliseconds += millisecond;
}

TDateTime::TDateTime(const char* dateTime)
    :TDate(dateTime),TTime(dateTime+11)
{

}

unsigned short TDateTime::PrintDateTime(char* pbOutputString, unsigned short cbOutputString)
{    
    unsigned short result = 0;
    result += TDate::PrintDate(pbOutputString, cbOutputString);
    if (cbOutputString>=12)
    {
        pbOutputString[10] = 'T';
        result += TTime::PrintTimeFull(pbOutputString + 11, cbOutputString - 11);
    } else {
        result = 0;
    }
    return result;
}

TDateTime TDateTime::AddYear(short year)
{
	TDate date = TDate::AddYear(year);
    TDateTime result(date.GetYear(), date.GetMonth(), date.GetDay(), GetHour(), GetMinute(), GetSecond());
    return result;
}

TDateTime TDateTime::AddMonth(short months)
{
    TDate date = TDate::AddMonth(months);
    TDateTime result(date.GetYear(), date.GetMonth(), date.GetDay(), GetHour(), GetMinute(), GetSecond());
    return result;
}

TDateTime TDateTime::AddDay(short days)
{
    TDate date = TDate::AddDay(days);
    TDateTime result(date.GetYear(), date.GetMonth(), date.GetDay(), GetHour(), GetMinute(), GetSecond());
    return result;
}

TDateTime TDateTime::AddHours(short hours)
{
    short d = hours / 24;
    hours   = hours % 24;
    
	TDate date = TDate::AddDay(d);
	TTime time = TTime::AddHours(hours);
    if ((time.GetHour()+hours)>=24)
    {
        date = TDate::AddDay();
    }
    TDateTime result(date.GetYear(), date.GetMonth(), date.GetDay(), time.GetHour(), time.GetMinute(), time.GetSecond(), time.GetMillisecond());
    return result;
}

TDateTime TDateTime::AddMinutes(short minutes)
{
    short d = minutes/1440;
    minutes = minutes % 1440;

    TDate date = TDate::AddDay(d);
	TTime time = TTime::AddMinutes(minutes);
    if ( (time.GetHour()*60+time.GetMinute()+minutes) >= 1440 )
    {
        date = TDate::AddDay();
    }
    TDateTime result(date.GetYear(), date.GetMonth(), date.GetDay(), time.GetHour(), time.GetMinute(), time.GetSecond(), time.GetMillisecond());
    return result;
}

TDateTime TDateTime::AddSeconds(short seconds)
{
    TDate date = TDate::AddDay(0);
	TTime time = TTime::AddSeconds(seconds);
    if ( time.GetHour()<GetHour() )
    {
        date = TDate::AddDay();
    }
    TDateTime result(date.GetYear(), date.GetMonth(), date.GetDay(), time.GetHour(), time.GetMinute(), time.GetSecond(), time.GetMillisecond());
    return result;
}

TDateTime TDateTime::AddMilliSeconds(short milliseconds)
{
    TDate date = TDate::AddDay(0);
	TTime time = TTime::AddMilliSeconds(milliseconds);
    if ( time.GetHour()<GetHour() )
    {
        date = TDate::AddDay();
    }
    TDateTime result(date.GetYear(), date.GetMonth(), date.GetDay(), time.GetHour(), time.GetMinute(), time.GetSecond(), time.GetMillisecond());
    return result;
}


