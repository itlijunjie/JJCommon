//
//  JJDateUtil.h
//  JJCommon
//
//  Created by lijunjie on 4/30/15.
//  Copyright (c) 2015 lijunjie. All rights reserved.
//

//G: 公元时代，例如AD公元
//yy: 年的后2位
//yyyy: 完整年
//MM: 月，显示为1-12
//MMM: 月，显示为英文月份简写,如 Jan
//MMMM: 月，显示为英文月份全称，如 Janualy
//dd: 日，2位数表示，如02
//d: 日，1-2位显示，如 2
//EEE: 简写星期几，如Sun
//EEEE: 全写星期几，如Sunday
//aa: 上下午，AM/PM
//H: 时，24小时制，0-23
//K：时，12小时制，0-11
//m: 分，1-2位
//mm: 分，2位
//s: 秒，1-2位
//ss: 秒，2位
//S: 毫秒
//Z: 时区

//d
//将日显示为不带前导零的数字（如 1）。如果这是用户定义的数字格式中的唯一字符，请使用 %d。
//
//dd
//将日显示为带前导零的数字（如 01）。
//
//EEE
//将日显示为缩写形式（例如 Sun）。
//
//EEEE
//将日显示为全名（例如 Sunday）。
//
//M
//将月份显示为不带前导零的数字（如一月表示为 1）。如果这是用户定义的数字格式中的唯一字符，请使用 %M。
//
//MM
//将月份显示为带前导零的数字（例如 01/12/01）。
//
//MMM
//将月份显示为缩写形式（例如 Jan）。
//
//MMMM
//将月份显示为完整月份名（例如 January）。
//
//gg
//显示时代/纪元字符串（例如 A.D.）
//
//h
//使用 12 小时制将小时显示为不带前导零的数字（例如 1:15:15 PM）。如果这是用户定义的数字格式中的唯一字符，请使用 %h。
//
//hh
//使用 12 小时制将小时显示为带前导零的数字（例如 01:15:15 PM）。
//
//H
//使用 24 小时制将小时显示为不带前导零的数字（例如 1:15:15）。如果这是用户定义的数字格式中的唯一字符，请使用 %H。
//
//HH
//使用 24 小时制将小时显示为带前导零的数字（例如 01:15:15）。
//
//m
//将分钟显示为不带前导零的数字（例如 12:1:15）。如果这是用户定义的数字格式中的唯一字符，请使用 %m。
//
//mm
//将分钟显示为带前导零的数字（例如 12:01:15）。
//
//s
//将秒显示为不带前导零的数字（例如 12:15:5）。如果这是用户定义的数字格式中的唯一字符，请使用 %s。
//
//ss
//将秒显示为带前导零的数字（例如 12:15:05）。
//
//f
//显示秒的小数部分。例如，ff将精确显示到百分之一秒，而 ffff 将精确显示到万分之一秒。用户定义格式中最多可使用七个 f符号。如果这是用户定义的数字格式中的唯一字符，请使用 %f。
//
//t
//使用 12 小时制，并对中午之前的任一小时显示大写的 A，对中午到 11:59 P.M之间的任一小时显示大写的 P。如果这是用户定义的数字格式中的唯一字符，请使用 %t。
//
//tt
//对于使用 12 小时制的区域设置，对中午之前任一小时显示大写的 AM，对中午到 11:59 P.M之间的任一小时显示大写的 PM。
//
//对于使用 24 小时制的区域设置，不显示任何字符。
//
//y
//将年份 (0-9)显示为不带前导零的数字。如果这是用户定义的数字格式中的唯一字符，请使用 %y。
//
//yy
//以带前导零的两位数字格式显示年份（如果适用）。
//
//yyy
//以四位数字格式显示年份。
//
//yyyy
//以四位数字格式显示年份。
//
//z
//显示不带前导零的时区偏移量（如 -8）。如果这是用户定义的数字格式中的唯一字符，请使用 %z。
//
//zz
//显示带前导零的时区偏移量（例如 -08）
//
//zzz
//显示完整的时区偏移量（例如 -08:00）

#import <Foundation/Foundation.h>
#define kDUYYYYMMddHHmm             @"YYYY-MM-dd HH:mm"
#define kDUYYYYMMddhhmm             @"YYYY-MM-dd hh:mm"
#define kDUHHmmss                   @"HH:mm:ss"
#define kDUHHmm                     @"HH:mm"
#define kDUyyyMMddHHmmssSSSS        @"yyy-MM-dd-HH:mm:ss:SSSS"
#define kDUyyyMMddHHmmssss          @"yyy-MM-dd-HH:mm:ssss"
#define kDUyyy                      @"yyy"
#define kDUyyyyMMdd                 @"yyyyMMdd"
#define kDUyyyyMMddhhmmss           @"yyyyMMddhhmmss"
#define kDUYYYYMMddhhmmss           @"YYYYMMddHHmmss"
#define kDUyyyyMMddHHmmssSSS        @"yyyyMMddHHmmssSSS"
#define kDU_YYYYMMddhhmmss          @"yyyy-MM-dd HH:mm:ss"
#define kDU_yyyyMMdd                @"yyyy-MM-dd"
#define kDU_MMddHHmm                @"MM-dd HH:mm"
#define kDU_MMdd                    @"MMdd"
#define kDU_MMYUEddRI               @"MM月dd日"
#define kDU_EEEdMMMyyyyHHmmsszzz    @"EEE,d MMM yyyy HH:mm:ss zzz"
#define kDU_dMMMyyyyHHmmsszzz       @"d MMM yyyy HH:mm:ss zzz"
#define kDU_MMddyyyyHHmmsstt        @"M/dd/yyyy HH:mm:ss aa"

enum
{
    kDUNone  = 0,
    kDUToday = 1,
    kDUYesterday = 2,
    kDUBeforeYesterday = 3,
    kDUEarlyday = 4,
};
typedef NSUInteger DUDateType;

@interface JJDateUtil : NSObject

/**
 *	@brief	根据时间戳返回格式化的时间字符串
 *
 *	@param 	secs 	时间戳
 *	@param 	format 	格式化的字符串
 *
 *	@return	返回格式化的时间
 */
+ (NSString *)getDateStringWithSecound:(NSTimeInterval)secs format:(NSString *)format;

/**
 *	@brief	根据当前时间返回格式化的时间字符串
 *
 *	@param 	format 	格式化字符串
 *
 *	@return	返回格式化的时间
 */
+ (NSString *)getCurrentDateStringWithFormat:(NSString *)format;

/**
 * 将一种格式的dateString转化为另一种格式的dateString
 *
 *  @param string  输入格式的字符串
 *  @param sFormat 源格式
 *  @param dFormat 目标格式
 *
 *  @return 返回目标格式的dateString
 */
+ (NSString *)stringWithDateFormat:(NSString *)string sFormat:(NSString *)sFormat dFormat:(NSString *)dFormat;

/**
 *  返回格林威治时间dateString的时间戳
 *
 *  @param dateString 对应的格林威治时间格式字符串
 *  @param gmtFormat  格林威治时间格式
 *
 *  @return 返回时间戳
 */
+ (NSTimeInterval)timeIntervalWithGMTDateFormat:(NSString *)gmtDateString gmtFormat:(NSString *)gmtFormat;

/**
 *  将一种格式的dateString格式化为需要的时间戳
 *
 *  @param string  时间字符串表示
 *  @param sFormat 原时间格式字符串
 *  @param dFormat 目标时间格式字符串
 *
 *  @return 返回格式化后的时间戳
 */
+ (NSTimeInterval)timeIntervalWithDateFormat:(NSString *)string sFormat:(NSString *)sFormat dFormat:(NSString *)dFormat;

/**
 *  @brief  根据一个时间字符串和格式字符串返回一个具体的NSDate
 *
 *  @param  string  时间的字符串表示
 *  @param  aFormat 时间的格式字符串
 *
 *  @return 返回创建好的NSDate
 */
+ (NSDate *)stringToNSDate:(NSString *)string format:(NSString*)aFormat;

/**
 *  @brief  根据一个时间字符串和格式字符串返回一个具体的NSTimeInterval
 *
 *  @param  string  时间的字符串表示
 *  @param  aFormat 时间的格式字符串
 *
 *  @return 返回创建好的NSTimeInterval
 */
+(NSTimeInterval)stringToNSTimeInterval:(NSString *)string format:(NSString*)aFormat;

/**
 *  @brief 根据一个UTC时间字符串和格式字符串返回一个具体的NSTimeInterval
 *
 *  @param string  表示时间的字符串
 *  @param aFormat 时间的格式
 *
 *  @return 返回表示的时间戳
 */
+ (NSTimeInterval)stringToNSTimeIntervalWithUTC:(NSString *)string format:(NSString*)aFormat;


/**
 *  获取时间距离今天的情况
 *
 *  @param msgTime 时间戳
 *
 *  @return 返回距离今天的枚举
 */
+ (DUDateType)handleDateType:(NSTimeInterval)msgTime;

@end
