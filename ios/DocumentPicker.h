
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNDocumentPickerSpec.h"

@interface DocumentPicker : NSObject <NativeDocumentPickerSpec>
#else
#import <React/RCTBridgeModule.h>

@interface DocumentPicker : NSObject <RCTBridgeModule>
#endif

@end
