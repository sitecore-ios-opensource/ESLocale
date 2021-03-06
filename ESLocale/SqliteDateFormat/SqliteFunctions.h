#ifndef __SDDATABASE_SQLITE_FUNCTIONS_H__
#define __SDDATABASE_SQLITE_FUNCTIONS_H__




#import <objc/objc-api.h>
#include <sqlite3.h>




/**
 @param argv_[0] - Date format in Objective-C style as described in http://unicode.org/reports/tr35/tr35-10.html#Date_Format_Patterns
 @param argv_[1] - Date in ANSI format "yyyy-MM-dd"
 @param argv_[2] - locale identifier "en_US"
 
 @return sqlite3_result_text with formatted date
 */
OBJC_EXTERN void ObjcFormatAnsiDateUsingLocale( sqlite3_context* ctx_,int argc_,sqlite3_value** argv_ );
OBJC_EXTERN void ObjcFormatAnsiDateUsingLocale_v2( sqlite3_context* ctx_,int argc_,sqlite3_value** argv_ );


/**
 @param argv_[0] - Date in ANSI format "yyyy-MM-dd"
 @param argv_[1] - locale identifier "en_US"

 @return sqlite3_result_text with formatted date 
    "Q1 yyyy" 
    "Q2 yyyy"
    "Q3 yyyy"
    "Q4 yyyy"     
 */
OBJC_EXTERN void ObjcGetYearAndQuarterUsingLocale( sqlite3_context* ctx_,int argc_,sqlite3_value** argv_ );


/**
 @param argv_[0] - Date in ANSI format "yyyy-MM-dd"
 @param argv_[1] - locale identifier "en_US"
 @param argv_[2] - format string for first half year 
@param argv_[3] - format string for second half year
 @param argv_[4] - defines whether the year should be truncated
 |short|long|
 ------------
 |'14  |2014|
 
 
 @return sqlite3_result_text with formatted date 
 "H1 yyyy" 
 "H2 yyyy"
 */
OBJC_EXTERN void ObjcGetYearAndHalfYearUsingLocale( sqlite3_context* ctx_,int argc_,sqlite3_value** argv_ );



#endif //__SDDATABASE_SQLITE_FUNCTIONS_H__
