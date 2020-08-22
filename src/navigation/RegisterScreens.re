let registerScreens = () => (
  Navigation.register("rrnnavdemo" ++ HomeScreen.id, () => Home.make),
  Navigation.register("HomeScreen", () => HomeTab.make),
  Navigation.register("rrnnavdemo" ++ SettingsScreen.id, () =>Settings.make),
  Navigation.register("rrnnavdemo" ++ LoginScreen.id, Login.screen),
  Navigation.register("ProfileScreen", Profile.screen),
);
