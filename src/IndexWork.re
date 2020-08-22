// let setDefaultOptions = () =>
//   Navigation.(
//     setDefaultOptions(
//       defaultOptions(
//         ~statusBar=optionsStatusBar(~backgroundColor="#4d089a", ()),
//         ~topBar=
//           optionsTopBar(
//             ~title=optionsTopBarTitle(~color="white", ()),
//             ~backButton=optionsTopBarBackButton(~color="white", ()),
//             ~background=optionsTopBarBackground(~color="#4d089a", ()),
//             (),
//           ),
//         (),
//       ),
//     )
//   );
// let rootConfigObj = {
//   "root": {
//     bottomTabs: {
//       children: [
//         {
//           stack: {
//             children: [{
//                          component: {
//                            name: "Home",
//                          },
//                        }],
//           },
//         },
//         {
//           stack: {
//             children: [{
//                          component: {
//                            name: "Settings",
//                          },
//                        }],
//           },
//         },
//       ],
//     },
//   },
// };
// let bottomTabsRoot = {
//   let homeStack =
//     Navigation.(
//       layoutStack(
//         ~id="Home",
//         ~children=[|HomeScreen.screen()|],
//         ~options=
//           navigationOptions(
//             ~animations=
//               optionsAnimations(
//                 ~setRoot=waitForRender(~waitForRender=true, ()),
//                 (),
//               ),
//             (),
//           ),
//         (),
//       )
//     );
//   let settingStack =
//     Navigation.(
//       layoutStack(
//         ~id="Settings",
//         ~children=[|SettingsScreen.screen()|],
//         ~options=
//           navigationOptions(
//             ~animations=
//               optionsAnimations(
//                 ~setRoot=waitForRender(~waitForRender=true, ()),
//                 (),
//               ),
//             (),
//           ),
//         (),
//       )
//     );
//   let settingStack = Navigation.bottomTabsStack(~stack=settingStack, ());
//   let homeStack = Navigation.bottomTabsStack(~stack=homeStack, ());
//   let bottomTabs =
//     Navigation.stackOptions(~bottomTabs=[|homeStack, settingStack|], ());
//   Navigation.(rootOptions(~root=bottomTabs, ()));
//   // Navigation.stackOptions(~bottomTabs=[|homeStack, settingStack|], ());
// };
// Js.log2("bottomTabsRoot", Js.Json.stringify(bottomTabsRoot->Obj.magic));
// let setRoot = () => {
//   let root =
//     Navigation.(
//       rootOptions(
//         ~root=
//           stackOptions(
//             ~stack=
//               layoutStack(
//                 ~id="AuthStack",
//                 ~children=[|HomeScreen.screen()|],
//                 ~options=
//                   navigationOptions(
//                     ~animations=
//                       optionsAnimations(
//                         ~setRoot=waitForRender(~waitForRender=true, ()),
//                         (),
//                       ),
//                     (),
//                   ),
//                 (),
//               ),
//             (),
//           ),
//         (),
//       )
//     );
//   Navigation.setRootOptions(root);
// };
//   let homeStack =
//     Navigation.(
//       layoutStack(
//         ~id="Home",
//         ~children=[|HomeScreen.screen()|],
//         ~options=
//           navigationOptions(
//             ~animations=
//               optionsAnimations(
//                 ~setRoot=waitForRender(~waitForRender=true, ()),
//                 (),
//               ),
//             (),
//           ),
//         (),
//       )
//     );
// let settingStack =
//     Navigation.(
//       layoutStack(
//         ~id="Settings",
//         ~children=[|SettingsScreen.screen()|],
//         ~options=
//           navigationOptions(
//             ~animations=
//               optionsAnimations(
//                 ~setRoot=waitForRender(~waitForRender=true, ()),
//                 (),
//               ),
//             (),
//           ),
//         (),
//       )
//     );
// let homeRoot =
//   Navigation.(
//     rootOptions(
//       ~root=
//         stackOptions(
//           ~stack=
//             layoutStack(
//               ~id="Home",
//               ~children=[|HomeScreen.screen()|],
//               ~options=
//                 navigationOptions(
//                   ~animations=
//                     optionsAnimations(
//                       ~setRoot=waitForRender(~waitForRender=true, ()),
//                       (),
//                     ),
//                   (),
//                 ),
//               (),
//             ),
//           (),
//         ),
//       (),
//     )
//   );
// let homeRoot =
//   Navigation.(
//     rootOptions(
//       ~root=stackOptions(~stack=homeStack,()),
//       (),
//     )
//   );
// Js.log2("homeRoot", Js.Json.stringify(homeRoot->Obj.magic));
// // Navigation.registerComponent("Home", () => HomeScreen.screen);
// // Navigation.registerComponent("Settings", () => SettingsScreen.screen);
// RegisterScreens.registerScreens();
// let start = () => {
//   setDefaultOptions();
//   // Navigation.onAppLaunched(() => setRoot()->ignore);
//   // Navigation.onAppLaunched(() => Navigation.setRootOptions(homeRoot)->ignore);
//   Navigation.onAppLaunched(() =>
//     Navigation.setRootOptions(homeRoot)
//     // Navigation.setRootOptions(bottomTabsRoot)
//     |> Js.Promise.then_(_result => {Js.Promise.resolve()})
//     |> ignore
//   );
//   // Navigation.setRootOptions(homeRoot) |> ignore
// };
