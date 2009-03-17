//
//  SplashViewController.h
//  iPhone
//
//  Created by Aubrey Francois on 10/18/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ScreenDismissalDelegate.h"
#import "BusyIndicatorDelegate.h"
#import "LocationAvailabilityDelegate.h"

@interface SplashViewController : UIViewController <LocationAvailabilityDelegate> {
	id <ScreenDismissalDelegate> dismissalDelegate;
	id <BusyIndicatorDelegate> busyIndicatorDelegate;
	UITextField *zipcodeField;
	UIScrollView *scrollView;
}

@property (nonatomic,retain) id <ScreenDismissalDelegate> dismissalDelegate;
@property (nonatomic,retain) id <BusyIndicatorDelegate> busyIndicatorDelegate;
@property (nonatomic, retain) IBOutlet UITextField *zipcodeField;
@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;

- (IBAction)splashOk:(id)sender forEvent:(UIEvent*)event;
- (IBAction)dismissKeyboard;
- (IBAction)scrollDown;
- (IBAction)scrollUp;
- (IBAction)zipcodeUpdated;

@end
