//
//  LFWebService.h
//  LastHistory
//
//  Created by Frederik Seiffert on 28.11.08.
//  Copyright 2008 Frederik Seiffert. All rights reserved.
//

#import <Cocoa/Cocoa.h>


extern NSString *LFWebServiceErrorDomain;

@interface LFWebService : NSObject {
	NSString *_apiKey;
	NSString *_secret;
	
	NSString *_userName;
	NSString *_sessionKey;
	
	NSString *_token; // used during authorization
}

- (instancetype)initWithApiKey:(NSString *)apiKey secret:(NSString *)secret;
- (instancetype)initWithApiKey:(NSString *)apiKey
			  secret:(NSString *)secret
			userName:(NSString *)userName
		  sessionKey:(NSString *)sessionKey NS_DESIGNATED_INITIALIZER;

@property (readonly, copy) NSString *apiKey;
@property (readonly, copy) NSString *secret;

@property (readonly, copy) NSString *userName;
@property (readonly, copy) NSString *sessionKey;

@property (readonly) BOOL isAuthenticated;

@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSString *authenticateGetToken;
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSURL *authenticateGetAuthorizationURL;
@property (NS_NONATOMIC_IOSONLY, readonly) BOOL authenticateFinish;

- (NSXMLDocument *)callMethod:(NSString *)methodName withParameters:(NSDictionary *)params error:(NSError **)outError;
- (NSXMLDocument *)callAuthenticatedMethod:(NSString *)methodName withParameters:(NSDictionary *)params error:(NSError **)outError;

@end
