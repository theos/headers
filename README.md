# `theos/vendor/include`
Headers included with Theos for easy compilation of most projects out of the box.

## Contributions are welcome!
Please send us headers you’ve put together that would be useful to the wider community. Be aware that we are looking for “clean” headers, *not* generated output from class-dump or a similar tool.

## Code rules
* Create headers only for what you use.
* Follow the existing coding style.
* Singleton (`sharedInstance`) methods should return `instancetype`.
* Don't just copy and paste lines from class-dumps - replace `id` with the appropriate class. Also change `arg1` and the like, or in some cases class-dump-z’s guessed argument names, to something more appropriate. If you don’t know the type, Cycript or FLEX can be helpful:

    ```console
    $ cycript -p SpringBoard
    cy# [SBBaconController sharedInstance].baconCurrentlyBeingEaten.class
    @"SBBacon"
    ```

    Additionally, ensure the appropriate types are used. The most common ones are:

    * `float` and `double` should usually become `CGFloat` or `NSTimeInterval`
    * `int` and `long` should usually become `NSInteger`
    * `unsigned int` and `unsigned long` should usually become `NSUInteger`

    This is especially important when using the headers as reference for hooking. An incorrect Objective-C type encoding can cause problems.
* Any headers under an [OSI-approved license](https://opensource.org/licenses) can be included here. Please add its license to [LICENSE.md](LICENSE.md).
