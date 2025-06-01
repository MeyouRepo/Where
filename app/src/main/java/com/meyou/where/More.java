package com.meyou.where;

import static com.meyou.where.What.NEXT_TO_HOME;

import android.annotation.SuppressLint;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import android.widget.TextView;
import com.meyou.Focus;

public class More extends Focus {

  private int getLoadValue() {
    return getIntent().getIntExtra(Common.PROPERTY, 0);
  }

  private int getLoadColor() {
    int color =
        BitmapFactory.decodeResource(getResources(), getDrawableId("zzz_" + getLoadValue()))
            .getPixel(95, 95);
    return Color.rgb(Color.red(color), Color.green(color), Color.blue(color));
  }

  @SuppressLint("SetTextI18n")
  @Override
  protected void onCreate(Bundle bundle) {
    super.onCreate(bundle);
    setContentView(getLayoutId("shu_x_" + getLoadValue()));
    ((ImageButton) findViewById(R.id.propertyBackIcon))
        .setImageResource(getDrawableId("zzz_" + getLoadValue()));
    ((TextView) findViewById(R.id.propertyTopTextView))
        .setText(getIntent().getStringExtra(Common.PROPERTY_TITLE) + "详解");

    findViewById(R.id.propertyWindow).setBackgroundColor(getLoadColor());
  }

  @Override
  protected void onUIState() {
    setWindowDrawable(R.drawable.next_window_drawable);
    hideSystemBars();
    layoutInSystemBars();
  }

  public void propertyClick(View v) {
    int viewId = v.getId();
    if (viewId == R.id.propertyBackIcon) {
      onBackPressed();
    } else if (viewId == R.id.propertyToHome) {
      putShare(NEXT_TO_HOME, true);
      startActivity(Home.class, R.anim.where_home_show, R.anim.where_to_home);
    } else if (viewId == R.id.propertyToCode) {
      startActivity(getIntent(Show.class).putExtra(Common.SHOW_CODE_PASSING, getLoadValue()));
      overridePendingTransition(R.anim.shuxing_to, R.anim.next_to_code);
    }
  }

  @SuppressLint("GestureBackNavigation")
  @Override
  public void onBackPressed() {
    super.onBackPressed();
    finish(R.anim.next_show, R.anim.yan_to_next);
  }
}
