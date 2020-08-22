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
let id = "PROFILE_SCREEN";
[@react.component]
let make = () => {
  <View style={styles##home}>
    <Text> "ProfileScreen 👋"->React.string </Text>
  </View>;
};

let screen = Utils.createScreenComp(id, () => make);
