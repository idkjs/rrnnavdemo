open ReactNative;
let styles =
  Style.(
    StyleSheet.create({
      "root":
        style(
          ~flex=1.,
          ~alignItems=`center,
          ~justifyContent=`center,
          ~backgroundColor="whitesmoke",
          (),
        ),
    })
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

let bottomTabs2: Navigation.bottomTabs =
  Navigation.(bottomTabs(~children=[|homeStack, settingStack|], ()));

let mainRoot =
  Navigation.(
    rootOptions(~root=stackOptions(~bottomTabs=bottomTabs2, ()), ())
  );

Js.log2("root", Js.Json.stringify(mainRoot->Obj.magic));
let id = "Login";
[@react.component]
let make = () => {
  <View style={styles##root}>
    <Button
      title="Login"
      color="#710ce3"
      onPress={_ => Navigation.setRootOptions(mainRoot)->ignore}
    />
  </View>;
};


let screen = Utils.createScreenComp(id, () => make);