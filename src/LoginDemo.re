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
let loginRoot =
  Navigation.(
    layoutStack(
      ~id="Login",
      ~children=[|LoginScreen.screen()|],
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
let homeRoot =
  Navigation.(rootOptions(~root=stackOptions(~stack=homeStack, ()), ()));
let mainRoot = BottomTabs.root;
  Navigation.(rootOptions(~root=stackOptions(~stack=homeStack, ()), ()));
let loginRoot =
  Navigation.(rootOptions(~root=stackOptions(~stack=loginRoot, ()), ()));

Js.log2("homeRoot", Js.Json.stringify(homeRoot->Obj.magic));

RegisterScreens.registerScreens();

let isLoggedIn = true;
// let isLoggedIn = false;
let start = () => {
  setDefaultOptions();
  Navigation.onAppLaunched(() =>
    Navigation.setRootOptions(isLoggedIn ? mainRoot : loginRoot)
    // Navigation.setRootOptions(loginRoot)
    |> Js.Promise.then_(_result => {Js.Promise.resolve()})
    |> ignore
  );
};
