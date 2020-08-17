type screen= [`Home | `Settings];
let registerScreens = () => (
  Navigation.registerComponent(`Home, Home.screen),
  Navigation.registerComponent(`Settings, Settings.screen),
  Navigation.registerComponent(`TestScreenModule, TestScreenModule.screen),
);
