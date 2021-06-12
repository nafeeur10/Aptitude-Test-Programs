/*

  This problem was given in DESCO'2016 written exam.
  Question: 
  
  In Java Language: Write a class named Bicycle having three integer variables (speed, gear, cost) and a constructor to initilize the variables. Also write a class named MountBike
  inherits Bicycle class, having an extra integer variable speedcost and a constructor to initialize the variables.

*/

class Bicycle {
    public int speed;
    public int gear;
    public int cost;

    public Bicycle(int speed, int gear, int cost) {
        this.speed = speed;
        this.gear = gear;
        this.cost = cost;
    }
}

class MountBike extends Bicycle {
    public int speedcost;

    public MountBike(int speed, int gear, int cost, int speedcost) {
        super(speed, gear, cost);
        this.speedcost = speedcost;
    }

    public void Output() {
        System.out.println("Car Description: ");
        System.out.println("------------------------");
        System.out.println("Speed: " + speed);
        System.out.println("Gear: " + gear);
        System.out.println("Cost: " + cost);
        System.out.println("Speed Cost: " + speedcost);
    }
}

public class BiCycleProblem {
    public static void main(String[] args) {
        MountBike mb = new MountBike(1, 2, 3, 5);
        mb.Output();
    }
}
