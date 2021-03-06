// // module Home = {
// //   open ReactNative;
// //   let target = {
// //     "root": {
// //       component: {
// //         name: "settings",
// //       },
// //     },
// //   };
// //   let styles =
// //     Style.(
// //       StyleSheet.create({
// //         "home":
// //           style(
// //             ~flex=1.,
// //             ~alignItems=`center,
// //             ~justifyContent=`center,
// //             ~backgroundColor="whitesmoke",
// //             (),
// //           ),
// //       })
// //     );

// //   [@react.component]
// //   let make = (~componentId) => {
// //     <View style={styles##home}>
// //       <Text> "Hello React Native Navigation 👋"->React.string </Text>
// //       <Button
// //         title="Push Settings Screen"
// //         color="#710ce3"
// //         onPress={_ => Navigation.push(componentId, (target, ()))}
// //       />
// //     </View>;
// //   };
// // };
// // module Settings = {
// //   open ReactNative;

// //   let styles =
// //     Style.(
// //       StyleSheet.create({
// //         "root":
// //           style(
// //             ~flex=1.,
// //             ~alignItems=`center,
// //             ~justifyContent=`center,
// //             ~backgroundColor="whitesmoke",
// //             (),
// //           ),
// //       })
// //     );

// //   [@react.component]
// //   let make = (~componentId as _) => {
// //     <View style={styles##root}>
// //       <Text> "Settings 👋"->React.string </Text>
// //     </View>;
// //   };
// // };

// // Navigation.register("Home", () => Home.make);
// // Navigation.register(`Settings, () => Settings.make);

// // Navigation.setDefaultOptions({
// //   animations: Some(animations),
// //   modalPresentationStyle: Some(`pageSheet),
// //   // this needs to be true otherwise a memory leak happens!
// //   modalInPresentation: true,
// // });
// let alert =
//   (title, message) =>
//     Navigation.setOverlay({
//       "component": {
//         name: Screens.Alert,
//         passProps: {
//           title,
//           message,
//         },
//       },
//     });
let rootConfig = {
  "root": {
    bottomTabs: {
      children: [
        {
          stack: {
            children: [{
                         component: {
                           name: "Home",
                         },
                       }],
          },
        },
        {
          stack: {
            children: [{
                         component: {
                           name: "Settings",
                         },
                       }],
          },
        },
      ],
    },
  },
};
type component = {name:string};
type children = array(component);

type stack ={ children: children};

// Navigation.setDefaultOptionsRaw({
//   "root": {
//     statusBar: {
//       backgroundColor: "#4d089a",
//     },
//     topBar: {
//       title: {
//         color: "white",
//       },
//       backButton: {
//         color: "white",
//       },
//       background: {
//         color: "#4d089a",
//       },
//     },
//     bottomTab: {
//       fontSize: 14,
//       selectedFontSize: 14,
//     },
//   },
// });

// RegisterScreens.registerScreens();
// // BaseRegisterScreens.registerScreens();

// Navigation.onAppLaunched(() => {Navigation.setRoot(root)});
// // Navigation._registerAppLaunchedListener((.) => {
// //   Navigation.setRoot(
// //     Navigation.setDefaultOptionsRaw({
// //       "root": {
// //         bottomTabs: {
// //           children: [
// //             {
// //               stack: {
// //                 children: [{
// //                              component: {
// //                                name: "Home",
// //                              },
// //                            }],
// //               },
// //             },
// //             {
// //               stack: {
// //                 children: [{
// //                              component: {
// //                                name: "Settings",
// //                              },
// //                            }],
// //               },
// //             },
// //           ],
// //         },
// //       },
// //     }),
// //   )
// //   |> Js.Promise.then_(_result => {Js.Promise.resolve()})
// //   |> ignore
// // });
// Navigation.onAppLaunched(() => {
//   Navigation.setRoot(
//     Navigation.setDefaultOptionsRaw({
//       "root": {
//         bottomTabs: {
//           children: [
//             {
//               stack: {
//                 children: [{
//                              component: {
//                                name: "Home",
//                              },
//                            }],
//               },
//             },
//             {
//               stack: {
//                 children: [{
//                              component: {
//                                name: "Settings",
//                              },
//                            }],
//               },
//             },
//           ],
//         },
//       },
//     }),
//     // |> Js.Promise.then_(_result => {Js.Promise.resolve()})
//     // |> ignore
//   )
// });
