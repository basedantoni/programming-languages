class Car {
        constructor({
                doors,
                state,
                color
        }) {
                this.doors = doors || 4;
                this.state = state || 'brand new';
                this.color = color || 'silver';
        }
}

class Truck {
        constructor({
                state,
                wheelSize,
                color
        }) {
                this.state = state || 'used';
                this.wheelSize = wheelSize || 'large';
                this.color = color || 'blue';
        }
}

class VehicleFactory {
        // Define the prototypes and utilities for this factory
        constructor() {
                this.vehicleClass = Car;
        }

        createVehicles(options) {
                switch (options.vehicleClass) {
                        case 'car':
                                this.vehicleClass = Car;
                                break;
                        case 'truck':
                                this.vehicleClass = Truck;
                                break;
                }

                return new this.vehicleClass(options);
        }
}

// Create an instance of our factory that makes cars
const carFactory = new VehicleFactory();
const car = carFactory.createVehicles({
        vehicleType: 'car',
        color: 'yellow',
        doors: 6,
})

console.log(car instanceof Car);
console.log(car);

// Subclass VehicleFactory to create a TruckFactory
class TruckFactory extends VehicleFactory {
        constructor() {
                super();
                this.vehicleClass = Truck;
        }
}

const truckFactory = new TruckFactory();
const truck = truckFactory.createVehicles({
        state: 'fix it again tony',
        wheelSize: 'medium',
        color: 'black',
})

console.log(truck instanceof Truck);
console.log(truck);
