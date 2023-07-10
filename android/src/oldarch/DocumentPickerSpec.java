package com.documentpicker;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.Promise;

abstract class DocumentPickerSpec extends ReactContextBaseJavaModule {
  DocumentPickerSpec(ReactApplicationContext context) {
    super(context);
  }

  public abstract void multiply(double a, double b, Promise promise);
}
