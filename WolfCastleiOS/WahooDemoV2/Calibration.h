//
//  Calibration.h
//  WahooDemoV2
//
//  Created by Carl Lewis on 19/09/2017.
//  Copyright © 2017 Wahoo Fitness. All rights reserved.
//

#import <WFConnector/WFConnector.h>
#import <WFConnector/WFWahooMotionAnalysisCalibratorDelegate.h>
#import <UIKit/UIKit.h>


@interface Calibration : UITableViewController {
    
    WFHardwareConnector* hardwareconnector;
    WFSensorData* sensorData;
    WFWahooMotionAnalysisCalibratorXCounting* calibCounter;
    WFWahooMotionAnalysisCalibrationProfileXCounting* calibProfileCounter;

    UILabel* repsCount;
    UIButton* repsStartBtn;
}


@property (nonatomic, strong) WFDeviceInformation* deviceInformation;
@property (nonatomic, strong) WFWahooMotionAnalysisCalibrationProfileXCounting* calibProfileCounter;
@property (nonatomic, strong) WFWahooMotionAnalysisCalibratorXCounting* calibCounter;
@property (nonatomic, strong) WFSensorData* sensorData;
@property (strong, nonatomic) NSDictionary* sensorConnectionLookup;
@property (strong, nonatomic) NSTimer* dataUpdateTimer;
@property (nonatomic, retain) IBOutlet UILabel *repsCount;
@property (strong, nonatomic) IBOutlet UIButton *repsStartBtn;

//Methods to be used in the implementation
- (void)setCalibration;
- (void)calibrationResponse:(NSNotification*)unused;




@end

