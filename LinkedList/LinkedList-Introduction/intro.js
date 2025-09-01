class Node {
  constructor(data, next = null) {
    this.data = data;
    this.next = next;
  }
}

const arr = [2, 5, 8, 7];

// Create first node
const y = new Node(arr[0]);

console.log(y);        // prints Node { data: 2, next: null }
console.log(y.data);   // prints 2
