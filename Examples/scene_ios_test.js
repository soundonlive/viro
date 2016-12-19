/**
 * Copyright (c) 2015-present, Viro, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
import React, { Component } from 'react';
import {
  AppRegistry,
  StyleSheet,
  Text,
  View
} from 'react-native';

import {
  ViroScene,
  ViroBox,
  ViroDirectionalLight,
  Viro360Photo,
  Materials,
} from 'react-viro';

var scene_ios_test = React.createClass({
    render: function() {
    return (
        <ViroScene>
            <ViroDirectionalLight color="#ffffff" direction={[0, 0, -1.0]} />
            <Viro360Photo source={{uri: "http://c5.staticflickr.com/8/7472/15972826220_d3c90c1fc9_h.jpg"}} rotation={[0,0,0]} />
            <ViroBox materials="wework_title" position={[0, .2, -3]} scale={[1, 1, 1] onTap={}}  />
        </ViroScene>
    );
  }
});

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#FFFFFF',
  },
  welcome: {
    fontSize: 20,
    textAlign: 'center',
    color: '#333333',
    margin: 10,
  },
  instructions: {
    textAlign: 'center',
    color: '#333333',
    marginBottom: 5,
  },
});

Materials.createMaterials({
  wework_title: {
    shininess: 1.0,
    lightingModel: "Constant",
    diffuseColor: "#ff0000",
  },
})

module.exports = scene_ios_test;