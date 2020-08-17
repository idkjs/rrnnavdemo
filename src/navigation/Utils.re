let createScreenComp = (screenId, component: unit => React.component('a)) => {
  //   Navigation.registerComponent(HomeScreen.id, () => Home.make);
  Navigation.registerComponent(
    screenId,
    component,
  );
};
let createScreen = (screenId, component: React.element) => {
  //   Navigation.registerComponent(HomeScreen.id, () => Home.make);
  Navigation.registerComponent(
    screenId,
    component,
  );
};
