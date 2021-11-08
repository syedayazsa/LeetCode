class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        LinkedList<int[]> ll = new LinkedList<>();
        for(int[] i : intervals){
            if(ll.isEmpty() || ll.getLast()[1] < i[0]){
                ll.add(i);
            }
            else{
                ll.getLast()[1] = Math.max(ll.getLast()[1], i[1]);
            }
        }
        return(ll.toArray(new int[ll.size()][]));
    }
}