open ReactNative;
module TestScreen = {
  let screenId = "TestScreenModule";
  [@react.component]
  let make = () => {
    <SafeAreaView>
      <Text> {React.string("Let's get this party started 4!")} </Text>
    </SafeAreaView>;
  };
  let screen = BaseUtils.createScreen2(screenId, () => make);
};
let screen =
  BaseUtils.createScreen2(TestScreen.screenId, () => TestScreen.make);
let screen2 = BaseUtils.createScreen3(TestScreen.screenId, <TestScreen />);
