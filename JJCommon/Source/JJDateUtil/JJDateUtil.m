//
//  JJDateUtil.m
//  JJCommon
//
//  Created by lijunjie on 4/30/15.
//  Copyright (c) 2015 lijunjie. All rights reserved.
//

#import "JJDateUtil.h"
#define kSecondsPerDay 24 * 60 * 60

@implementation JJDateUtil

+ (NSString*)getDateStringWithSecound:(NSTimeInterval)secs format:(NSString *)format
{
    NSDate *date = [NSDate dateWithTimeIntervalSince1970:secs];
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:format];
    NSString *ymds = [formatter stringFromDate:date];
    return ymds;
}

+ (NSString*)getCurrentDateStringWithFormat:(NSString *)format
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:format];
    NSString *now = [dateFormatter stringFromDate:[NSDate date]];
    return now;
}

+ (NSString *)stringWithDateFormat:(NSString *)string sFormat:(NSString *)sFormat dFormat:(NSString *)dFormat;
{
    NSDateFormatter * formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:sFormat];
    NSDate *date = [formatter dateFromString:string];
    [formatter setDateFormat:dFormat];
    NSString *ymds = [formatter stringFromDate:date];
    return ymds;
}

+ (NSTimeInterval)timeIntervalWithGMTDateFormat:(NSString *)gmtDateString gmtFormat:(NSString *)gmtFormat
{
    NSDateFormatter * formatter = [[NSDateFormatter alloc] init];
    [formatter setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
    [formatter setDateFormat:gmtFormat];
    NSDate *date = [formatter dateFromString:gmtDateString];
    return [date timeIntervalSince1970];
}

+ (NSTimeInterval)timeIntervalWithDateFormat:(NSString *)string sFormat:(NSString *)sFormat dFormat:(NSString *)dFormat
{
    NSDateFormatter * formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:sFormat];
    NSDate *date = [formatter dateFromString:string];
    [formatter setDateFormat:dFormat];
    return [date timeIntervalSince1970];
}

+ (NSDate *)stringToNSDate:(NSString *)string format:(NSString*)aFormat
{
    NSDateFormatter * formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:aFormat];
    NSDate *date = [formatter dateFromString :string];
    return date;
}

+ (NSTimeInterval)stringToNSTimeInterval:(NSString *)string format:(NSString*)aFormat
{
    NSDateFormatter * formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:aFormat];
    NSDate *date = [formatter dateFromString :string];
    return [date timeIntervalSince1970];
}

+ (NSTimeInterval)stringToNSTimeIntervalWithUTC:(NSString *)string format:(NSString *)aFormat{
    NSDateFormatter * formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:aFormat];
    NSDate *date = [formatter dateFromString :string];
    NSTimeZone *zone = [NSTimeZone systemTimeZone];
    NSTimeInterval interval = [zone secondsFromGMTForDate:date];
    NSDate *localeDate = [date  dateByAddingTimeInterval: interval];
    return [localeDate timeIntervalSince1970];
}

+ (DUDateType)handleDateType:(NSTimeInterval)msgTime
{
    DUDateType type = kDUNone;
    NSString *strTimeStamp = [JJDateUtil getDateStringWithSecound:msgTime format:kDU_YYYYMMddhhmmss];
    if (strTimeStamp)
    {
        NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
        [dateFormatter setDateFormat:kDU_yyyyMMdd];
        NSString *strToday = [dateFormatter stringFromDate:[NSDate date]];
        
        NSDate *yesterday = [[NSDate alloc] initWithTimeIntervalSinceNow:- (kSecondsPerDay)];
        NSString *strYesterday = [dateFormatter stringFromDate:yesterday];
        
        NSDate *dayBeforeYesterday = [[NSDate alloc] initWithTimeIntervalSinceNow:-(kSecondsPerDay) * 2];
        NSString *strDayBeforeYesterday = [dateFormatter stringFromDate:dayBeforeYesterday];
        
        NSString *strMsgDay = [strTimeStamp substringToIndex:[strTimeStamp rangeOfString:@" "].location];
        
        if ([strMsgDay isEqualToString:strToday])
        {
            type = kDUToday;
        }
        else if ([strMsgDay isEqualToString:strYesterday])
        {
            type = kDUYesterday;
        }
        else if ([strMsgDay isEqualToString:strDayBeforeYesterday])
        {
            type = kDUBeforeYesterday;
        }
        else if ([strMsgDay length] > 5)
        {
            type = kDUEarlyday;
        }
    }
    return type;
}

@end
