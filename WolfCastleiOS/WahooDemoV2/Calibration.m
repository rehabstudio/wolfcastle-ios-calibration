//
//  Calibration.m
//  WahooDemoV2
//
//  Created by Carl Lewis on 19/09/2017.
//  Copyright © 2017 Wahoo Fitness. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Calibration.h"

@implementation Calibration

@synthesize repsCount;
@synthesize calibCounter;
@synthesize calibProfileCounter;
@synthesize repsStartBtn;
@synthesize sensorData;

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    
    [calibCounter beginCalibrationForNewExercise];
}

//---------------------------------------------------------------------------------------
- (void)didReceiveMemoryWarning
{
    //release the view if it does not have a superview
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
 
}

//----------------------------------------------------------------------------------------
- (void)viewDidLoad
{
    [super viewDidLoad];
    
    //
   
}

//------------------------------------------------------------------------------------------



//-----------------------------------------------------------------------------------------
- (void)setCalibration
{
    
}

//-----------------------------------------------------------------------------------------

- (void)calibrationResponse:(NSNotification *)unused
{
    //get the Calibration Data
    WFWahooRawSensorConnection* rawData;
    
    
    
    
}





@end
