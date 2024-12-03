const _private = {
        i: 5,
        get() {
                console.log(`Value is: ${this.i}`);
        },
        set(val) {
                this.i = val;
        },
        run() {
                console.log("Running...");
        },
        jump() {
                console.log("Jumping");
        },
};

const module = {
        facade({ val, run }) {
                _private.set(val);
                _private.get();
                if (run) {
                        _private.run();
                }
        },
};

export default module;
