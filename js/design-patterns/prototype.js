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

// Defining properties using Object.create
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

roadster.getModel()

// Prototype without using Object.create
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
