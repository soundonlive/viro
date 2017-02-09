/**
 * Copyright © 2016 Viro Media. All rights reserved.
 */
package com.viromedia.bridge.component;

import android.content.Context;

import com.viro.renderer.jni.DirectionalLightJni;
import com.viro.renderer.jni.NodeJni;
import com.viromedia.bridge.component.node.Scene;

public class DirectionalLight extends Light {

    private float[] mDirection;

    private DirectionalLightJni mNativeLight;

    public DirectionalLight(Context context) {
        super(context);
    }

    @Override
    public void addToNode(NodeJni nodeJni) {

        mNativeLight.addToNode(nodeJni);
    }

    @Override
    public void removeFromNode(NodeJni nodeJni) {

        mNativeLight.removeFromNode(nodeJni);
    }

    @Override
    protected void onTearDown(){
        if (mNativeLight != null){
            mNativeLight.destroy();
            mNativeLight = null;
        }
        super.onTearDown();
    }

    public float[] getDirection() {
        return mDirection;
    }

    public void setDirection(float[] mDirection) {
        if (mDirection == null) {
            throw new IllegalArgumentException("Direction cannot be null for DirectionalLight");
        }
        this.mDirection = mDirection;
    }

    @Override
    public void onPropsSet() {
        super.onPropsSet();

        if (mNativeLight != null) {

            mNativeLight = new DirectionalLightJni(mColor, mDirection);
        } else {
            mNativeLight.setColor(mColor);
            mNativeLight.setDirection(mDirection);
        }
    }
}