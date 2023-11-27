# react-native-uims

user interface monitoring system for react-native

## Installation

```sh
yarn add react-native-uims
```

## Config ENV

- android root build.gradle
  ```groovy
  buildscript {
    ext {
      RN_UIMS_OVERSEA_ENABLED = 'true'
    }
  }
  ```
- ios Podfile
  ```ruby
  target 'UIMSExample' do
    ENV['RN_UIMS_OVERSEA_ENABLED'] = 'false' # must be set before 'use_native_modules!'
    config = use_native_modules!
  end
  ```

## Versions
> analytics/umeng
```shell
.
├── Android
│   ├── analytics
│   │   └── analytics_android_8.0.0
│   │       └── umeng-analytics-8.0.0.jar
│   └── common
│       └── common_android_2.0.1
│           └── normal
│               └── umeng-common-2.0.1.jar
├── ReactNative
│   ├── analytics
│   │   └── analytics_reactnative_2.0.0
│   │       ├── analytics_android
│   │       │   └── AnalyticsModule.java
│   │       └── analytics_ios
│   │           ├── UMAnalyticsModule.h
│   │           └── UMAnalyticsModule.m
│   └── common
│       └── common_reactnative_2.0.0
│           ├── common_android
│           │   ├── DplusReactPackage.java
│           │   └── RNUMConfigure.java
│           ├── common_ios
│           │   ├── RNUMConfigure.h
│           │   └── RNUMConfigure.m
│           └── js
│               ├── AnalyticsUtil.js
│               ├── PushUtil.js
│               └── ShareUtil.js
└── iOS
    ├── analytics
    │   └── analytics_ios_6.0.1
    │       └── UMAnalytics.framework
    └── common
        └── common_ios_2.0.0
            └── normal
                └── UMCommon.framework

35 directories, 21 files
```

## Contributing

See the [contributing guide](CONTRIBUTING.md) to learn how to contribute to the repository and the development workflow.

## License

MIT

---

Made with [create-react-native-library](https://github.com/callstack/react-native-builder-bob)
