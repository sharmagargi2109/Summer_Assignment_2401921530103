interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class KidUsers implements LibraryUser {
    int age;
    String bookType;

    public void registerAccount() {
        if (age < 12) {
            System.out.println("Kid account registered");
        } else {
            System.out.println("Sorry, Age must be less than 12");
        }
    }

    public void requestBook() {
        if (bookType.equalsIgnoreCase("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Sorry, you are not eligible for this book.");
        }
    }
}

class AdultUser implements LibraryUser {
    int age;
    String bookType;

    public void registerAccount() {
        if (age > 12) {
            System.out.println("Adult Account registered");
        } else {
            System.out.println("Sorry, Age must be greater than 12 ");
        }
    }

    public void requestBook() {
        if (bookType.equalsIgnoreCase("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Sorry, you are allowed to take only adult Fiction books");
        }
    }
}

public class Main {
    public static void main(String[] args) {

        System.out.println("\n kid Users");

        KidUsers kid = new KidUsers();

        kid.age = 10;
        kid.registerAccount();

        kid.age = 15;
        kid.registerAccount();

        kid.bookType = "Kids";
        kid.requestBook();

        kid.bookType = "Fiction";
        kid.requestBook();

        System.out.println("\n AdultUser");

        AdultUser adult = new AdultUser();

        adult.age = 20;
        adult.registerAccount();

        adult.age = 10;
        adult.registerAccount();

        adult.bookType = "Kids";
        adult.requestBook();

        adult.bookType = "Fiction";
        adult.requestBook();
    }
}