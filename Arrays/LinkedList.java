public class LinkedList {
    public class Node {
        public Node next;
        public int val;

        public Node(int val) {
            this.val = val;
        }
    }

    public class LinkedLister {
        Node head;

        public void append(int val) {
            Node current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = new Node(val);
        }
    }

    public static void Main(String[] args) {
        System.out.println(0);
    }
}
