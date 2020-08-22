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


let settingTab = {
  Navigation.(
    tabSettings(
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
    )
  );
};
Js.log2("settingTab2", settingTab);
let homeTab = {
  Navigation.(
    tabSettings(
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
};
Js.log2("homeTab", homeTab);
let tabSettings=Navigation.tabSettingsStack(~stack=settingTab,())
let tabHome=Navigation.tabSettingsStack(~stack=homeTab,())
let root = Navigation.bottomTabSettings(~bottomTabs=[|tabHome,tabSettings|],())
Js.log2("bottomTabSettings", root);



Js.log2("root", Js.Json.stringify(root->Obj.magic));

RegisterScreens.registerScreens();
let start = () => {
  setDefaultOptions();

  Navigation.onAppLaunched(() =>
    Navigation.setRootTabs(root)
    |> Js.Promise.then_(_result => {Js.Promise.resolve()})
    |> ignore
  );
};
