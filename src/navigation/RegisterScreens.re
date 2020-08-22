let registerScreens = () => (
  Navigation.register("rrnnavdemo" ++ HomeScreen.id, () => Home.make),
  Navigation.register("rrnnavdemo" ++ SettingsScreen.id, Settings.screen),
  Navigation.register("rrnnavdemo" ++ LoginScreen.id, Login.screen),
);
