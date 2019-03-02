//
//  RPSGame.h
//  RockPaperScissors
//
//  Created by Cesare de Cal on 3/2/19.
//  Copyright © 2019 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPSTurn.h"

NS_ASSUME_NONNULL_BEGIN

@interface RPSGame : NSObject

@property (nonatomic) RPSTurn *playerTurn;
@property (nonatomic) RPSTurn *computerTurn;

- (instancetype)initWithFirstTurn:(RPSTurn *)playerTurn
                       secondTurn:(RPSTurn *)computerTurn;

@end

NS_ASSUME_NONNULL_END
