const MyMixin = superclass => {
        return class extends superclass {
                moveUp() {
                        console.log('move up');
                }
                moveDown() {
                        console.log('move down');
                }
                stop() {
                        console.log('stop!');
                }
        }
};

class CarAnimator {
        moveLeft() {
                console.log('move left');
        }
};

class PersonAnimator {
        moveRandomly() {
                console.log('wow so random');
        }
};

class MyAnimator extends MyMixin(CarAnimator) { }

const myAnimator = new MyAnimator();
myAnimator.moveUp();
myAnimator.moveDown();
myAnimator.moveLeft();
myAnimator.stop();

// Augmenting a constructor to include functionality w/o duplicating
// this process for every constructor function
class Car {
        constructor({ model, color }) {
                this.model = model || 'no model provided';
                this.color = color || 'no color provided';
        }
};

const Mixin = superclass =>
        class extends superclass {
                driveForward() {
                        console.log('drive forward')
                }
                driveBackward() {
                        console.log('drive backward')
                }
                driveSideways() {
                        console.log('drive sideways')
                }
        };

class MyCar extends Mixin(Car) { }

const myCar = new MyCar({
        model: 'Mazda3',
        color: 'black',
})

myCar.driveForward();
myCar.driveSideways();
