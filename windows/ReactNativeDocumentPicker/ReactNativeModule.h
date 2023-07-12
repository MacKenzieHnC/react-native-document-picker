#pragma once

#include "JSValue.h"
#include "NativeModules.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::ReactNativeDocumentPicker
{

    REACT_MODULE(ReactNativeModule, L"DocumentPicker")
    struct ReactNativeModule
    {
        // See https://microsoft.github.io/react-native-windows/docs/native-modules for details on writing native modules

        REACT_INIT(Initialize)
        void Initialize(ReactContext const &reactContext) noexcept
        {
            m_reactContext = reactContext;
        }

        REACT_METHOD(Multiply, L"multiply")
        void Multiply(double a, double b, ReactPromise<double> promise) noexcept
        {
            promise.Resolve(a * b);
        }

    private:
        ReactContext m_reactContext{nullptr};
    };

} // namespace winrt::ReactNativeDocumentPicker
