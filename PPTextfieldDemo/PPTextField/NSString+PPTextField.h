//
//  NSString+PPTextField.h
//  PPDemos
//
//  Created by ╰莪呮想好好宠Nǐつ on 2017/3/19.
//  Copyright © 2017年 PPAbner. All rights reserved.


#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,PPTextFieldStringType){
    PPTextFieldStringTypeNumber,
    PPTextFieldStringTypeLetter,
    PPTextFieldStringTypeChinese
};

@interface NSString (PPTextField)


/**
 某个字符串是不是数字、字母、汉字。
 */
-(BOOL)pp_is:(PPTextFieldStringType)stringType;

/**
 获取字符串长度 【一个汉字算2个字符串，一个英文算1个字符串】
 */
-(int)pp_getStrLengthWithCh2En1;


/**
 移除字符串中除exceptLetters外的所有特殊字符
 */
-(NSString *)pp_removeSpecialLettersExceptLetters:(NSArray<NSString *> *)exceptLetters;

@end
