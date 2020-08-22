[@bs.deriving abstract]
type bottomTabs = {
  [@bs.optional]
  id: string,
  [@bs.optional]
  children: array(Navigation.layoutStackChildren),
  [@bs.optional]
  options: Navigation.navigationOptions,
};
[@bs.deriving abstract]
type stackOptions = {
  [@bs.optional]
  stack: Navigation.layoutStack,
  [@bs.optional]
  bottomTabs,
};
[@bs.deriving abstract]
type rootOptions = {
  [@bs.optional]
  root: stackOptions,
};
let homeTab =
  Navigation.(
    layoutStackChildren(
      ~component=
        layoutComponent(
          ~id="HOME_TAB",
          ~name="HomeScreen",
          ~options=
            navigationOptions(
              ~bottomTab=optionsBottomTabs(~icon=HomeIcon.image, ()),
              ~animations=
                optionsAnimations(
                  ~setRoot=waitForRender(~waitForRender=true, ()),
                  (),
                ),
              (),
            ),
          (),
        ),
    )
  );
let profileTab =
  Navigation.(
    layoutStackChildren(
      ~component=
        layoutComponent(
          ~id="PROFILE_SCREEN",
          ~name="ProfileScreen",
          ~options=
            navigationOptions(
              ~bottomTab=optionsBottomTabs(~icon=ProfileIcon.image, ()),
              ~animations=
                optionsAnimations(
                  ~setRoot=waitForRender(~waitForRender=true, ()),
                  (),
                ),
              (),
            ),
          (),
        ),
    )
  );

let bottomTabs2 =
  bottomTabs(
    ~id="BOTTOM_TABS_LAYOUT",
    ~children=[|homeTab, profileTab|],
    (),
  );
let root = rootOptions(~root=stackOptions(~bottomTabs=bottomTabs2, ()), ());
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setRootOptions: rootOptions => Js.Promise.t(unit) = "setRoot";
RegisterScreens.registerScreens();
let start = () => {
  BottomTabs.setDefaultOptions();

  Navigation.onAppLaunched(() =>
    setRootOptions(root)
    |> Js.Promise.then_(_result => {Js.Promise.resolve()})
    |> ignore
  );
};
