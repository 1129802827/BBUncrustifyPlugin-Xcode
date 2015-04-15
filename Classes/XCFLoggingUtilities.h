//
//  XCFLoggingUtilities.h
//  BBUncrustifyPlugin
//
//  Created by Benoît Bourdon on 15/04/15.
//
//

#import <Foundation/Foundation.h>
#import "XCFLoggingDefines.h"

@interface XCFLoggingUtilities : NSObject

+ (void)setUpLogger;

+ (NSURL *)fileLoggerDirectoryURL;
+ (NSURL *)mostRecentLogFileURL;

@end
