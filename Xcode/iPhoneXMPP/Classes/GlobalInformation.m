//
//  GlobalInformation.m
//  Mocial
//
//  Created by Robert Grzesik on 11-07-21.
//  Copyright 2011 Schulich School of Business. All rights reserved.
//

#import "GlobalInformation.h"

@implementation GlobalInformation
@synthesize userImage;

static GlobalInformation *sharedInformation = nil;

+ (GlobalInformation *)sharedInformation

{
    
    if (sharedInformation == nil) {
        
        sharedInformation = [[super allocWithZone:NULL] init];
        sharedInformation.userImage = [[UIImage alloc] init];
    }
    
    return sharedInformation;
}



+ (id)allocWithZone:(NSZone *)zone

{
    
    return [[self sharedXMPPStream] retain];
    
}



- (id)copyWithZone:(NSZone *)zone

{
    
    return self;
    
}



- (id)retain

{
    
    return self;
    
}



- (NSUInteger)retainCount

{
    
    return NSUIntegerMax;  //denotes an object that cannot be released
    
}



- (void)release

{
    
    //do nothing
    
}



- (id)autorelease

{
    
    return self;
    
}

@end
