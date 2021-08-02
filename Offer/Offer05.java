public class Offer05 {

    public String replaceSpace(String s) {
        if (s.length() == 0 || s.equals("")){
            return null;
        }
        return s.replace("","%20");
    }
}
