// module Home = {
//   open ReactNative;

//   let styles =
//     Style.(
//       StyleSheet.create({
//         "home":
//           style(
//             ~flex=1.,
//             ~alignItems=`center,
//             ~justifyContent=`center,
//             ~backgroundColor="whitesmoke",
//             (),
//           ),
//       })
//     );

//   [@react.component]
//   let make = () => {
//     <View style={styles##home}>
//       <Text> "Hello React Native Navigation 👋"->React.string </Text>
//     </View>;
//   };
// };

// Navigation.register("Home", () => Home.make);
// RegisterScreens.registerScreens();
// // Navigation._registerAppLaunchedListener((.) => {
// //   Navigation.setRoot(
// //     Navigation.rootOptions(
// //       ~root=
// //         Navigation.layoutStack(
// //           ~id="Home",
// //           ~children=[|HomeScreen.screen()|],
// //           (),
// //         ),
// //       (),
// //     ),
// //   )
// //   // |> Js.Promise.then_(_result => {Js.Promise.resolve()})
// //   // |> ignore
// // });
// let root =
//   Navigation.rootOptions(
//     ~root=
//       Navigation.layoutStack(
//         ~componentId="Home",
//         ~children=[|HomeScreen.screen()|],
//         (),
//       ),
//     (),
//   );
// Navigation.onAppLaunched(() => {
//   Navigation.setRoot(
//     root,
//     // |> Js.Promise.then_(_result => {Js.Promise.resolve()})
//     // |> ignore
//   )
// });
