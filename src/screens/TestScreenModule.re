open ReactNative;
module TestScreen = {
  let screenId = "TestScreenModule";
  [@react.component]
  let make = () => {
    <SafeAreaView>
      <Text> {React.string("Let's get this party started 4!")} </Text>
    </SafeAreaView>;
  };
  let screen = Utils.createScreen2(screenId, () => make);
};
let screen = Utils.createScreen2(TestScreen.screenId, () => TestScreen.make);
let screen2 = Utils.createScreen3(TestScreen.screenId, <TestScreen />);
