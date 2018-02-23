//
//  MDOptionComposerCell.h
//  midtrans2
//
//  Created by Parth Mudgal on 23/02/18.
//  Copyright © 2018 Parth Mudgal. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "MDOption.h"

@class MDOptionComposerCell;

@protocol MDOptionComposerCellDelegate <NSObject>
- (void)optionCell:(MDOptionComposerCell *)cell didEditOption:(MDOption *)option;
@end

@interface MDOptionComposerCell : UITableViewCell
@property (nonatomic) MDOption *option;
@property (nonatomic, weak) id<MDOptionComposerCellDelegate>delegate;
@end
