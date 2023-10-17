class Solution {
    public boolean canCross(int[] stones) {
         int destination= stones[stones.length-1];
        HashMap<Integer, HashSet<Integer>>hash_map =new HashMap<>();
        for(int stone :stones){
            hash_map.put(stone,new HashSet<>());
        }
        hash_map.get(stones[0]).add(1);
        for(int i=0;i<stones.length;i++){
            int curr=stones[i];
            for(Integer jump : hash_map.get(curr)){
                int nxt=curr+jump;
                if(nxt == destination){
                    return true;
                }
                if(hash_map.containsKey(nxt)){
                    if(jump-1>0){
                        hash_map.get(nxt).add(jump-1);
                    }
                    hash_map.get(nxt).add(jump);
                    hash_map.get(nxt).add(jump+1);
                }
            }
        }
        return false;
    }
}