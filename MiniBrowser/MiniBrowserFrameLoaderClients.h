//
//  MiniBrowserFrameLoaderClients.h
//  MiniBrowser
//
//  Created by Horky Chen on 4/1/13.
//  Copyright (c) 2013 Horky Chen. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MiniBrowserFrameLoaderClients : NSObject
{
    NSWindowController * controller;
}
-initWithController:(NSWindowController *)aController;
@end