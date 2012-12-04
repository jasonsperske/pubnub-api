//
//  PNDefaultConfiguration.h
//  pubnub
//
//  Created by Sergey Mamontov on 12/4/12.
//
//

#ifndef PNDefaultConfiguration_h
#define PNDefaultConfiguration_h

// Stores reference on host URL which is used
// to access PubNub services
static NSString * const kPNHost = @"pubsub.pubnub.com";

// Stores reference on keys which is required
// to establish connection and send packets to it
static NSString * const kPNPublishKey = @"demo";
static NSString * const kPNSubscriptionKey = @"demo";
static NSString * const kPNSecretKey = nil;
static NSString * const kPNCipherKey = nil;
static BOOL const kPNSecureConnectionRequired = NO;


#endif // PNDefaultConfiguration_h