/**
 * @format
 */
import { AppRegistry } from "react-native";
import App from "./src/App.bs";

const APP_NAME = "rrnnavdemo";

AppRegistry.registerComponent(APP_NAME, () => App);
// In index.js of a new project
// const { Navigation } = require('react-native-navigation');
// const React = require('react');
// // const {default as App} = require("./App");
// // import App from "./App";
// // import App from "./src/Basic";
// // import "./src/Index.bs";
// const { View, Text, StyleSheet } = require('react-native');

// const HomeScreen = (props) => {
//     return (
//       <View style={styles.home}>
//         <Text>Hello React Native Navigation 👋</Text>
//       </View>
//     );
//   };
//   HomeScreen.options = {
//     topBar: {
//       title: {
//         text: 'Home',
//         color: 'white'
//       },
//       background: {
//         color: '#4d089a'
//       }
//     }
//   }
// Navigation.registerComponent('Home', () => HomeScreen);

// Navigation.events().registerAppLaunchedListener(async () => {
//   Navigation.setRoot({
//     root: {
//       stack: {
//         children: [
//           {
//             component: {
//               name: 'Home'
//             }
//           }
//         ]
//       }
//     }
//   });
// });

// const styles = StyleSheet.create({
//   home: {
//     flex: 1,
//     alignItems: 'center',
//     justifyContent: 'center',
//     backgroundColor: 'whitesmoke'
//   },
//   root: {
//     flex: 1,
//     alignItems: 'center',
//     justifyContent: 'center',
//     backgroundColor: 'whitesmoke'
//   }
// });

