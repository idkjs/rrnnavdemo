// type id = string;
// type screen = unit => React.element;

type events;

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external registerScreenComponent: (string, unit =>React.component('a)) => React.element =
  "registerComponent";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external registerScreen: (string, React.element) => React.element =
  "registerComponent";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external registerScreen: (string, 'a) => React.element =
  "registerComponent";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setRoot: 'a => unit = "setRoot";

/* EVENTS */
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external events: unit => events = "events";

[@bs.send]
external _registerAppLaunchedListener: events => (unit => unit) => unit = "registerAppLaunchedListener";

let onAppLaunched =  (f: unit => unit) => events() -> _registerAppLaunchedListener(f)

// let createScreen = Utils.createScreen;