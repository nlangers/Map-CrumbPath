//
//  FirstViewController.h
//  Map
//
//  Created by Nicholas Langley on 29/01/2013.
//  Copyright (c) 2013 Nicholas Langley. All rights reserved.
//

#import "CrumbPath.h"
#import "CrumbPathView.h"
#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface FirstViewController : UIViewController
<MKMapViewDelegate, CLLocationManagerDelegate>

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

- (IBAction)showCurrentLocation:(id)sender;


@end
