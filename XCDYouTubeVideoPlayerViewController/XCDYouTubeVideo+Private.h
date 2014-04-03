//
//  XCDYouTubeVideo+Private.h
//  XCDYouTubeVideoPlayerViewController
//
//  Created by Cédric Luthi on 17.03.14.
//  Copyright (c) 2014 Cédric Luthi. All rights reserved.
//

#import <XCDYouTubeVideoPlayerViewController/XCDYouTubeVideo.h>

@interface XCDYouTubeVideo ()

- (instancetype) initWithIdentifier:(NSString *)identifier response:(NSURLResponse *)response data:(NSData *)data error:(NSError **)error;

@end
