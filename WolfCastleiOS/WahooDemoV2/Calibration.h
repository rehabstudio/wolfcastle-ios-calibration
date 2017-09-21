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


@interface Calibration : UITableViewController


@property (nonatomic, strong) WFDeviceInformation* deviceInformation;
@property (nonatomic, strong) WFWahooMotionAnalysisCalibrationProfileXCounting* calibProfileCount;

@end

