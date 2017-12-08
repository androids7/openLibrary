
package as.op.lib;

import android.app.Activity;
import android.widget.TextView;
import android.os.Bundle;
import android.widget.*;


public class HelloJni extends Activity
{
      @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

       
        TextView  tv = new TextView(this);
		try
		{
			
        tv.setText( stringFromJNI() );
		
		}catch(Exception e)
		{
			Toast.makeText(getBaseContext(),e.toString(),0).show();
		}
		
		
        setContentView(tv);
    }

    public native String  stringFromJNI();

    public native String  unimplementedStringFromJNI();

 
    static {
        System.loadLibrary("hello-jni");
    }
}
