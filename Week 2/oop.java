interface Playable {
    void play();
}

class Veena implements Playable {
    public void play() {
        System.out.println("Veena is playing");
    }
}

class Saxophone implements Playable {
    public void play() {
        System.out.println("Saxophone is playing");
    }
}

public class Test {
    public static void main(String[] args) {

        // a. Create an instance of Veena and call play()
        Veena v = new Veena();
        v.play();

        // b. Create an instance of Saxophone and call play()
        Saxophone s = new Saxophone();
        s.play();

        // c. Using Playable reference variable
        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}