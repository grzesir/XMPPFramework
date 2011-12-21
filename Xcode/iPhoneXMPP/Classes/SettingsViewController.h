//
//  SettingsViewController.h
//  iPhoneXMPP
//
//  Created by Eric Chamberlain on 3/18/11.
//  Copyright 2011 RF.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GlobalInformation.h"


extern NSString *const kXMPPmyJID;
extern NSString *const kXMPPmyPassword;


@interface SettingsViewController : UIViewController 
{
  UITextField *jidField;
  UITextField *passwordField;
  IBOutlet UIImageView *userImage;
}

@property (nonatomic,retain) IBOutlet UITextField *jidField;
@property (nonatomic,retain) IBOutlet UITextField *passwordField;

- (IBAction)done:(id)sender;
- (IBAction)hideKeyboard:(id)sender;

@end
