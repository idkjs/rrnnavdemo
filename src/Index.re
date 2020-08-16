module Home = {
  open ReactNative;

  let styles =
    Style.(
      StyleSheet.create({
        "home":
          style(
            ~flex=1.,
            ~alignItems=`center,
            ~justifyContent=`center,
            ~backgroundColor="whitesmoke",
            (),
          ),
      })
    );

  [@react.component]
  let make = () => {
    <View style={styles##home}>
      <Text> "Hello React Native Navigation 👋"->React.string </Text>
    </View>;
  };
};

Navigation.registerComponent(HomeScreen.id, () => Home.make);

Navigation.registerAppLaunchedListener((.) => {
  Navigation.setRoot(
    Navigation.rootOptions(
      ~root=
        Navigation.layoutStack(
          ~id="Home",
          ~children=[|HomeScreen.screen()|],
          (),
        ),
      (),
    ),
  )
  |> Js.Promise.then_(_result => {Js.Promise.resolve()})
  |> ignore
});
