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

let homeStack =
  Navigation.(
    optionsStacks(
      ~stack=
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
        ),
      (),
    )
  );

let settingStack =
  Navigation.(
    optionsStacks(
      ~stack=
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
          (),
        ),
      (),
    )
  );
let x: Navigation.bottomTabs =
  Navigation.(bottomTabs(~children=[|homeStack, settingStack|], ()));
Js.log2("bottomTabsStack", Js.Json.stringify(x->Obj.magic));
let bottomTabs2: Navigation.bottomTabs =
  Navigation.(bottomTabs(~children=[|homeStack, settingStack|], ()));
Js.log2("bottomTabsStack", Js.Json.stringify(x->Obj.magic));

let root =
  Navigation.(
    rootOptions(~root=stackOptions(~bottomTabs=bottomTabs2, ()), ())
  );

Js.log2("root", Js.Json.stringify(root->Obj.magic));

RegisterScreens.registerScreens();
let start = () => {
  setDefaultOptions();

  Navigation.onAppLaunched(() =>
    Navigation.setRootOptions(root)
    |> Js.Promise.then_(_result => {Js.Promise.resolve()})
    |> ignore
  );
};
