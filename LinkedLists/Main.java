public class Main{
     class Node {
        public Node next;
        public int val;

        public Node(int val) {
            this.val = val;
        }
    }

    public class LinkedList {
        Node head;

        public void append(int val) {
            Node current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = new Node(val);
        }

        public void prepend(int val){
        }
    }

    public static void Main(String[] args) {
        System.out.println(); 
        
    }
}
