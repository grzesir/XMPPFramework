//
//  GlobalInformation.h
//  Mocial
//
//  Created by Robert Grzesik on 11-07-21.
//  Copyright 2011 Schulich School of Business. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "XMPP.h"

#define ROOM_LOGIN_ACCURACY 150
#define ROOM_LOGIN_ACCURACY_TIME_LIMIT 10

static NSString * const SERVER_IP = @"107.21.127.57";//@"173.201.26.191";
static NSString * const SERVER_DOMAIN = @"mocial";

@interface GlobalInformation : NSObject
{
    UIImage *userImage;
}

@property (nonatomic, retain) UIImage *userImage;

+ (GlobalInformation *)sharedInformation;

@end
