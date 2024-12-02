# Learning Design Patterns in JavaScript

## Protoype
This pattern is used to create objects based on a template by cloning an already existing object

The use of classes isn't necessary in JavaScript, because we can simply copy an existing functional object

Real prototypal inheritance is achieved with `Object.create()`
```js
const Car = {
        name: "Tesla",
        drive() {
                console.log("I'm in me mom's car, vroom vroom");
        },
        panic() {
                console.log("Get out me car, awwww");
        }
}

const newCar = Object.create(Car);

console.log(newCar.name)
```

Using JavaScript also allows us to use advanced techniques like differential inheritance, meaning objects are able to directly inherit from other objects

We can also define properites using the second argument of `Object.create()`
```js
const vehicle = {
        name: "Tesla Roadster",
        getModel() {
                console.log(`The model of this vehicle is ${this.model}`)
        }
}

const roadster = Object.create(vehicle, {
        id: {
                value: Math.random(),
                enumerable: true,
        },
        model: {
                value: "Roadster",
                enumerable: true,
        }
});
```

Here is an alternative that doesn't use `Object.create`
```js
class VehiclePrototype {
        constructor(model) {
                this.model = model;
        }

        getModel() {
                console.log(`The model of this vehicle is ${this.model}`)
        }

        Clone() { }
}

class Vehicle extends VehiclePrototype {
        constructor(model) {
                super(model)
        }
        Clone() {
                return new Vehicle(this.model);
        }
}

const v = new Vehicle("Model 3");
const v2 = v.Clone();

v2.getModel();
```
> This does not allow the user to define read-only properties

A final alternative in the following:
```js
const beget = (() => {
        class F {
                constructor() {}
        }

        return proto => {
                F.prototype = proto;
                return new F();
        }
})();
```

