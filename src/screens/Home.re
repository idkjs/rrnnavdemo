
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

let screen = Utils.createScreenComp("Home", () => make);
