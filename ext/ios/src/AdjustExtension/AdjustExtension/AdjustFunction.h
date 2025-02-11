//
//  AdjustFunction.h
//  Adjust SDK
//
//  Created by Pedro Silva (@nonelse) on 7th August 2014.
//  Copyright (c) 2014-2018 Adjust GmbH. All rights reserved.
//

#import "FlashRuntimeExtensions.h"
#import <AdjustSdk/Adjust.h>

@interface AdjustFunction: NSObject

@end

FREObject ADJonCreate(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJtrackEvent(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJsetEnabled(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJisEnabled(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJappWillOpenUrl(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJsetOfflineMode(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJsetDeviceToken(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJgetIdfa(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJaddSessionCallbackParameter(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJremoveSessionCallbackParameter(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJresetSessionCallbackParameters(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJaddSessionPartnerParameter(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJremoveSessionPartnerParameter(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJresetSessionPartnerParameters(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJsendFirstPackages(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJgetAdid(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJgetAttribution(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJgetSdkVersion(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJgdprForgetMe(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
// Android methods.
FREObject ADJonResume(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJonPause(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJsetReferrer(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJgetGoogleAdId(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJgetAmazonAdId(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
// Test methods.
FREObject ADJsetTestOptions(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
FREObject ADJteardown(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
// Util methods.
NSNumber *convertMilliStringToNumber(NSString *milliS);
