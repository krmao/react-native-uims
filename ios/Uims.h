
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNUimsSpec.h"

@interface Uims : NSObject <NativeUimsSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Uims : NSObject <RCTBridgeModule>
#endif

@end
