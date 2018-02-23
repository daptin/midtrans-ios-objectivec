//
//  MDOption.h
//  midtrans2
//
//  Created by Parth Mudgal on 23/02/18.
//  Copyright © 2018 Parth Mudgal. All rights reserved.
//


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MDOptionType) {
    MDOptionTypeGeneral,
    MDOptionTypeColor,
    MDOptionTypeComposer
};

typedef NS_ENUM(NSUInteger, MDComposerType) {
    MDComposerTypeText,
    MDComposerTypeCheck,
    MDComposerTypeRadio
};

@interface MDOption : NSObject<NSCoding>
+ (MDOption *)optionGeneralWithName:(NSString *)name value:(id)value;
+ (MDOption *)optionColorWithName:(NSString *)name value:(UIColor *)value;
+ (MDOption *)optionComposer:(MDComposerType)composerType name:(NSString *)name value:(id)value;
+ (MDOption *)optionCheckListWithName:(NSString *)name checkedList:(NSArray *)checkedList;

@property (nonatomic, assign) MDOptionType type;
@property (nonatomic, assign) MDComposerType composerType;
@property (nonatomic) NSString *name;
@property (nonatomic) NSString *subName;
@property (nonatomic) id value;

@end
