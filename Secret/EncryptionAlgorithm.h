//
//  EncryptionAlgorithm.h
//  Secret
//
//  Created by 翁高剑 on 14/12/13.
//  Copyright (c) 2014年 翁高剑. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EncryptionAlgorithm : NSObject

- (NSString *)CaesarShiftsForEnglish:(NSString *)originalString withSecretKey: (int) secretKey;
- (NSString *)CaesarShiftsForChinese:(NSString *)originalString withSecretKey: (int) secretKey;
- (NSString *)TheRailFenceCipher: (NSString *) originalString;
- (NSString *)VigenereCipher: (NSString *) originalString withSecreKey: (NSString *) secreKey;
- (NSString *)PolybiusCipher: (NSString *) originalString;
- (NSString *)MultiplicationCipher: (NSString *) originalString withSecretKey: (int) secretKey;
- (NSString *)MorseCode: (NSString *) originalString;

@end
