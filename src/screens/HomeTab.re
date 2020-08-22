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
    <Text> "HomeTabsScreen 👋"->React.string </Text>
  </View>;
};

let screen = Utils.createScreenComp("HomeTab", () => make);

let push = () => {
  Navigation.pushChild("HomeTab", HomeTabsScreen.screen());
};
