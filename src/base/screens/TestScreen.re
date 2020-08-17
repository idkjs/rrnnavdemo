open ReactNative;
let screenId = "TestScreen";
[@react.component]
let make = () => {
  <SafeAreaView>
    <Text> {React.string("Let's get this party started!")} </Text>
  </SafeAreaView>;
};
let x = make;
// let screen:React.element = make;
let screen = Base.registerScreenComponent(screenId, () => make);
let screen2 = BaseUtils.createScreen(~screenId, ~component=() => make);
module TestScreen4 = {
  let screenId = "TestScreen4";
  [@react.component]
  let make = () => {
    <SafeAreaView>
      <Text> {React.string("Let's get this party started 4!")} </Text>
    </SafeAreaView>;
  };
};
let screen3 = BaseUtils.createScreen2(screenId, () => make);
let screen4 = BaseUtils.createScreen3(TestScreen4.screenId, <TestScreen4 />);
