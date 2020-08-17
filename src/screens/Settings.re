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

[@react.component]
let make = (~componentId as _) => {
  <View style={styles##root}>
    <Text> "Settings 👋"->React.string </Text>
  </View>;
};
let screen = Utils.createScreenComp(`Settings, () => make);