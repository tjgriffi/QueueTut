public class MyQueue<T>{
	private static class MyQueueNode<T>{

		private T _data;
		private MyQueueNode<T> _next;

		public MyQueueNode<T>(T data){
			_data = data;
		}
	}

	private MyQueueNode<T> _first;
	private MyQueueNode<T> _last;

	public void add(T item){
		//Create the new node
		MyQueueNode<T> toAdd = new MyQueueNode<T>(item);

		if (isEmpty())
		{
			_first = toAdd;
			_last = toAdd;
			return;
		}

		toAdd._next = _first;
		_first = toAdd;
	}

	public T remove(){
		if (isEmpty())
		{
			return NullPointerException;
		}

		MyQueueNode<T> curr = _first;
		_first = _first._next;

		return curr._data;
	}

	public T peek(){
		return _first._data;
	}

	public bool isEmpty(){
		return (_first == null);
	}
}