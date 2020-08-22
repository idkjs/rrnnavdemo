let setDefaultOptions = () =>
  Navigation.(
    setDefaultOptions(
      defaultOptions(
        ~statusBar=optionsStatusBar(~backgroundColor="#4d089a", ()),
        ~topBar=
          optionsTopBar(
            ~title=optionsTopBarTitle(~color="white", ()),
            ~backButton=optionsTopBarBackButton(~color="white", ()),
            ~background=optionsTopBarBackground(~color="#4d089a", ()),
            (),
          ),
        (),
      ),
    )
  );

let settingStack = {
  let stack =
    Navigation.(
      layoutStack(
        ~id="Settings",
        ~children=[|SettingsScreen.screen()|],
        ~options=
          navigationOptions(
            ~animations=
              optionsAnimations(
                ~setRoot=waitForRender(~waitForRender=true, ()),
                (),
              ),
            (),
          ),
      )
    );
  stack;
};

let homeStack =
  Navigation.(
    layoutStack(
      ~id="Home",
      ~children=[|HomeScreen.screen()|],
      ~options=
        navigationOptions(
          ~animations=
            optionsAnimations(
              ~setRoot=waitForRender(~waitForRender=true, ()),
              (),
            ),
          (),
        ),
      (),
    )
  );

// let homeRoot =
//   Navigation.(rootOptions(~root=stackOptions(~stack=homeStack, ()), ()));

// Js.log2("homeRoot", Js.Json.stringify(homeRoot->Obj.magic));

// RegisterScreens.registerScreens();
// let start = () => {
//   setDefaultOptions();
//   // Navigation.onAppLaunched(() => setRoot()->ignore);
//   // Navigation.onAppLaunched(() => Navigation.setRootOptions(homeRoot)->ignore);
//   Navigation.onAppLaunched(()
//     =>
//       Navigation.setRootOptions(homeRoot)
//       |> Js.Promise.then_(_result => {Js.Promise.resolve()})
//       |> ignore
//     );
//   // Navigation.setRootOptions(homeRoot) |> ignore
// };
