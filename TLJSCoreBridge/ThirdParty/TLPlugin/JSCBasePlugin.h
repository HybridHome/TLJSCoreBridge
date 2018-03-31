//
//  JSCBasePlugin.h
//  TLJSCoreBridge
//
//  Created by lichuanjun on 2018/3/30.
//  Copyright © 2018年 lichuanjun. All rights reserved.
//

#import "JSCPlugin.h"

typedef NS_ENUM(NSUInteger, JSCParamsErrorType) {
    JSCParamsErrorTypeNone = 0,
    JSCParamsErrorTypeNoParameters,
    JSCParamsErrorTypeInvalidFormat,
    JSCParamsErrorTypeRequiredParameterMissing
};

@interface JSCBasePlugin : JSCPlugin

- (void)setKeepCallbackAsBool:(BOOL)isKeepCallback forcallbackId:(NSString*)callbackId;

- (JSCParamsErrorType)checkRequiredStringParameter:(NSString *)parameterkey inArguments:(NSArray *)arguments;
- (JSCParamsErrorType)checkRequiredStringParameters:(NSArray *)parameterkeys inArguments:(NSArray *)arguments;

- (void)sendSuccessResultWithMessage:(NSDictionary *)message callbackId:(NSString*)callbackId;
- (void)sendSuccessResultWithResCode:(NSString *)resCode resMsg:(NSString *)resMsg callBackId:(NSString *)callbackId;
- (void)sendFailedResultWithErrorType:(JSCParamsErrorType)errorType callBackId:(NSString *)callbackId;
- (void)sendFailedResultWithResCode:(NSString *)resCode resMsg:(NSString *)resMsg callBackId:(NSString *)callbackId;
- (void)sendPluginResultWithStatus:(JSCCommandStatus)commandStatus message:(NSDictionary *)message callbackId:(NSString*)callbackId;

- (void)popupAlertViewWithTitle:(NSString *)title message:(NSString *)message;

@end
