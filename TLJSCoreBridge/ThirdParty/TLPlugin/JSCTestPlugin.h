//
//  JSCTestPlugin.h
//  TLJSCoreBridge
//
//  Created by lichuanjun on 2018/3/30.
//  Copyright © 2018年 lichuanjun. All rights reserved.
//

#import "JSCBasePlugin.h"

@interface JSCTestPlugin : JSCBasePlugin

- (void)changeNavTitle:(JSCInvokedPluginCommand *)command;
- (void)sendEmail:(JSCInvokedPluginCommand *)command;
- (NSString *)getAppVersionSync:(JSCInvokedPluginCommand *)command;

@end
