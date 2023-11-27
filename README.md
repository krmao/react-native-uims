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
  target 'UimsExample' do
    ENV['RN_UIMS_OVERSEA_ENABLED'] = 'false' # must be set before 'use_native_modules!'
    config = use_native_modules!
  end
  ```

## Contributing

See the [contributing guide](CONTRIBUTING.md) to learn how to contribute to the repository and the development workflow.

## License

MIT

---

Made with [create-react-native-library](https://github.com/callstack/react-native-builder-bob)
