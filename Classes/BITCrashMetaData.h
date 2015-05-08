/*
 * Author: Andreas Linde <mail@andreaslinde.de>
 *
 * Copyright (c) 2012-2014 HockeyApp, Bit Stadium GmbH.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#import <Foundation/Foundation.h>
#import "HockeySDKFeatureConfig.h"

#if HOCKEYSDK_FEATURE_CRASH_REPORTER

NS_ASSUME_NONNULL_BEGIN

/**
 *  This class provides properties that can be attached to a crash report via a custom alert view flow
 */
@interface BITCrashMetaData : NSObject

/**
 *  User provided description that should be attached to the crash report as plain text
 */
@property (nonatomic, copy, nullable) NSString *userDescription;

/**
 *  User name that should be attached to the crash report
 */
@property (nonatomic, copy, nullable) NSString *userName;

/**
 *  User email that should be attached to the crash report
 */
@property (nonatomic, copy, nullable) NSString *userEmail;

/**
 *  User ID that should be attached to the crash report
 */
@property (nonatomic, copy, nullable) NSString *userID;

@end

NS_ASSUME_NONNULL_END

#endif /* HOCKEYSDK_FEATURE_CRASH_REPORTER */
