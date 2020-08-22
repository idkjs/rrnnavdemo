let registerScreens = () => (
  Navigation.register("rrnnavdemo" ++ HomeScreen.id, Home.screen),
  Navigation.register("rrnnavdemo" ++ SettingsScreen.id, Settings.screen),
  Navigation.register("rrnnavdemo" ++ LoginScreen.id, Login.screen),
  Navigation.register("rrnnavdemo" ++ "TestScreenModule", TestScreenModule.screen),
);
