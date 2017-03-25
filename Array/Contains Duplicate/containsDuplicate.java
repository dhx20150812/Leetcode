public class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet set=new HashSet();
        for(int x:nums){
            if(!set.add(x))
                return true;
        }
        return false;
    }
}
