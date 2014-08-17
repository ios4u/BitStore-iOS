//
//  Lockbox.h
//
//  Created by Mark H. Granoff on 4/19/12.
//  Copyright (c) 2012 Hawk iMedia. All rights reserved.
//

@interface Lockbox : NSObject

+(BOOL)setString:(NSString *)value forKey:(NSString *)key;
+(NSString *)stringForKey:(NSString *)key;

+(BOOL)setArray:(NSArray *)value forKey:(NSString *)key;
+(NSArray *)arrayForKey:(NSString *)key;

+(BOOL)setDictionary:(NSDictionary *)value forKey:(NSString *)key;
+(NSDictionary *)dictionaryForKey:(NSString *)key;
+(NSDictionary *)dictionaryForKey:(NSString *)key sync:(BOOL)sync;

@end
