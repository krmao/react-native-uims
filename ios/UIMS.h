
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNUIMSSpec.h"

@interface UIMS : NSObject <NativeUIMSSpec>
#else
#import <React/RCTBridgeModule.h>

@interface UIMS : NSObject <RCTBridgeModule>
#endif

@end
