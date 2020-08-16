let registerScreens1 = () => {
  Base.registerScreen(
    "TestScreen",
    TestScreen.screen2,
    //   Base.registerScreen("TestScreen", TestScreen.screen4);
  );
};
let registerScreens = () => (
  Base.registerScreen("TestScreen", TestScreen.screen2),
  Base.registerScreen("TestScreen4", TestScreen.screen4),
  Base.registerScreen("TestScreenModule", TestScreenModule.screen),
);
