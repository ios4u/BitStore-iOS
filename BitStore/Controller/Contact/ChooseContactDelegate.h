//
//  ChooseContactDelegate.h
//  BitStore
//
//  Created by Dylan Marriott on 17.06.14.
//  Copyright (c) 2014 Dylan Marriott. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Address;

@protocol ChooseContactDelegate <NSObject>

- (void)choseContact:(Address *)contact;

@end
