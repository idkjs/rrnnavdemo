let createScreenComp = (screenId, component: unit => React.component('a)) => {
  //   Navigation.register(HomeScreen.id, () => Home.make);
  Navigation.register(
    screenId,
    component,
  );
};
let createScreen = (screenId, component: React.element) => {
  //   Navigation.register(HomeScreen.id, () => Home.make);
  Navigation.register(
    screenId,
    component,
  );
};
