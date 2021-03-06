//
//  NYTAPIManager.h
//  NYTMostPopularArticles
//
//  Created by BalajiMAC on 24/11/18.
//  Copyright © 2018 BalajiMAC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NYTAPIManager : NSObject

typedef void(^ServiceBlock)(NSArray *articlesArray, NSError *error);
+(instancetype)sharedManager;

-(void)getMostPopularArticle:(ServiceBlock)serviceBlock;

@end

NS_ASSUME_NONNULL_END
