/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
        var res="Hello World"
        return res;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */