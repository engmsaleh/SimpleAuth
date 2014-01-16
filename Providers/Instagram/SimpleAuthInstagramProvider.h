//
//  SimpleAuthInstagramProvider.h
//  SimpleAuthInstagram
//
//  Created by Caleb Davenport on 11/7/13.
//  Copyright (c) 2013 Seesaw Decisions Corporation. All rights reserved.
//

#import "SimpleAuthProvider.h"

@interface SimpleAuthInstagramProvider : SimpleAuthProvider

- (void)accessTokenWithCompletion:(SimpleAuthRequestHandler)completion;
- (void)instagramAccountWithAccessToken:(NSString *)accessToken completion:(SimpleAuthRequestHandler)completion;

@end
