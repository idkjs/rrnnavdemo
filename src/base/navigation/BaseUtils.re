let createScreen = (~screenId, ~component: unit => React.component('a)) => {
  //   Navigation.register(HomeScreen.id, () => Home.make);
  Base.registerScreenComponent(
    screenId,
    component,
  );
};
let createScreen2 = (screenId, component: unit => React.component('a)) => {
  //   Navigation.register(HomeScreen.id, () => Home.make);
  Base.registerScreenComponent(
    screenId,
    component,
  );
};
let createScreen3 = (screenId, component: React.element) => {
  //   Navigation.register(HomeScreen.id, () => Home.make);
  Base.registerScreen(
    screenId,
    component,
  );
};
// let registerScreen = (~screenId,~component:React.component('a)) => {
// //   Navigation.register(HomeScreen.id, () => Home.make);
//   Base.registerScreen(screenId, () => component());
// };
