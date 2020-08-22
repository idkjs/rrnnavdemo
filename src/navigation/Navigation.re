type props('a) = 'a;
type imageRequireSource;
[@bs.deriving abstract]
type optionsBottomTabs = {
  [@bs.optional]
  text: string,
  [@bs.optional]
  fontSize: float,
  [@bs.optional]
  selectedFontSize: float,
  [@bs.optional]
  icon: imageRequireSource,
  // [@bs.optional]
  // visible: bool,
  // [@bs.optional]
  // animate: bool,
  // [@bs.optional]
  // hideOnScroll: bool,
  // [@bs.optional]
  // leftButtonColor: ReactNative.Color.t,
  // [@bs.optional]
  // rightButtonColor: ReactNative.Color.t,
  // [@bs.optional]
  // leftButtonDisabledColor: ReactNative.Color.t,
  // [@bs.optional]
  // rightButtonDisabledColor: ReactNative.Color.t,
  // [@bs.optional]
  // drawBehind: bool,
  // [@bs.optional]
  // testID: string,
  // [@bs.optional]
  // title: optionsTopBarTitle,
  // [@bs.optional]
  // subTitle: optionsTopBarSubTitle,
  // [@bs.optional]
  // backButton: optionsTopBarBackButton,
  // [@bs.optional]
  // leftButtons: array(optionsTopBarButton),
  // [@bs.optional]
  // rightButtons: array(optionsTopBarButton),
  // [@bs.optional]
  // background: optionsTopBarBackground,
  // [@bs.optional]
  // barStyle: string,
  // [@bs.optional]
  // noBorder: bool,
  // [@bs.optional]
  // searchBar: bool,
  // [@bs.optional]
  // searchBarHiddenWhenScrolling: bool,
  // [@bs.optional]
  // hideNavBarOnFocusSearchBar: bool,
  // [@bs.optional]
  // largeTitle: optionsLargeTitle,
  // [@bs.optional]
  // height: androidDensityNumber,
  // [@bs.optional]
  // borderColor: ReactNative.Color.t,
  // [@bs.optional]
  // borderHeight: androidDensityNumber,
  // [@bs.optional]
  // elevation: androidDensityNumber,
  // [@bs.optional]
  // topMargin: float,
};
[@bs.deriving abstract]
type waitForRender = {
  [@bs.optional]
  waitForRender: bool,
};
[@bs.deriving abstract]
type optionsAnimations = {
  [@bs.optional]
  setStackRoot: waitForRender,
  [@bs.optional]
  setRoot: waitForRender,
  [@bs.optional]
  push: waitForRender,
  [@bs.optional]
  pop: waitForRender,
  [@bs.optional]
  showModal: waitForRender,
  [@bs.optional]
  dismissModal: waitForRender,
};
[@bs.deriving abstract]
type optionsLayout = {
  [@bs.optional]
  backgroundColor: string,
  [@bs.optional]
  componentBackgroundColor: string,
};

type optionsTopBarTitleComponent;

[@bs.obj]
external optionsTopBarTitleComponent:
  (
    ~id: string=?,
    ~name: string=?,
    ~alignment: [ | `center | `fill]=?,
    ~passProps: props('a)=?,
    unit
  ) =>
  optionsTopBarTitleComponent;

[@bs.deriving abstract]
type optionsTopBarTitle = {
  [@bs.optional]
  text: string,
  [@bs.optional]
  fontSize: float,
  [@bs.optional]
  color: ReactNative.Color.t,
  [@bs.optional]
  fontFamily: string,
  [@bs.optional]
  height: float,
  [@bs.optional]
  alignment: string,
  [@bs.optional]
  component: optionsTopBarTitleComponent,
  [@bs.optional]
  padLeft: bool,
};
type optionsTopBarSubTitle;

type optionsTopBarBackButton;
[@bs.obj]
external optionsTopBarBackButton:
  (
    ~icon: imageRequireSource=?,
    ~visible: bool=?,
    ~title: string=?,
    ~showTitle: bool=?,
    ~color: ReactNative.Color.t=?,
    unit
  ) =>
  optionsTopBarBackButton;

[@bs.deriving abstract]
type optionsTopBarBackground = {
  [@bs.optional]
  color: ReactNative.Color.t,
  [@bs.optional]
  clipToBounds: bool,
  [@bs.optional]
  translucent: bool,
  [@bs.optional]
  blur: bool,
};

type iconInsets = {
  top: float,
  left: float,
  bottom: float,
  right: float,
};

type optionsTopBarButton;

[@bs.obj]
external optionsTopBarButton:
  (
    ~id: string=?,
    ~icon: imageRequireSource=?,
    ~systemItem: [@bs.string] [
                   | [@bs.as "done"] `done_
                   | `cancel
                   | `edit
                   | `save
                   | `add
                   | `flexibleSpace
                   | `fixedSpace
                   | `compose
                   | `reply
                   | `action
                   | `organize
                   | `bookmarks
                   | `search
                   | `refresh
                   | `stop
                   | `camera
                   | `trash
                   | `play
                   | `pause
                   | `rewind
                   | `fastForward
                   | `undo
                   | `redo
                 ]
                   =?,
    ~text: string=?,
    ~fontFamily: string=?,
    ~enabled: bool=?,
    ~disableIconTint: bool=?,
    ~color: ReactNative.Color.t=?,
    ~disabledColor: ReactNative.Color.t=?,
    ~testID: string=?,
    ~showAsAction: string=?,
    ~iconInsets: iconInsets=?,
    unit
  ) =>
  optionsTopBarButton;

[@bs.deriving abstract]
type optionsTopBarLargeTitle = {
  [@bs.optional]
  visible: bool,
  [@bs.optional]
  fontSize: float,
  [@bs.optional]
  color: ReactNative.Color.t,
  [@bs.optional]
  fontFamily: string,
  [@bs.optional]
  fontWeight: string,
};
type androidDensityNumber = float;

[@bs.deriving abstract]
type optionsTopBar = {
  [@bs.optional]
  visible: bool,
  [@bs.optional]
  animate: bool,
  [@bs.optional]
  hideOnScroll: bool,
  [@bs.optional]
  leftButtonColor: ReactNative.Color.t,
  [@bs.optional]
  rightButtonColor: ReactNative.Color.t,
  [@bs.optional]
  leftButtonDisabledColor: ReactNative.Color.t,
  [@bs.optional]
  rightButtonDisabledColor: ReactNative.Color.t,
  [@bs.optional]
  drawBehind: bool,
  [@bs.optional]
  testID: string,
  [@bs.optional]
  title: optionsTopBarTitle,
  [@bs.optional]
  subTitle: optionsTopBarSubTitle,
  [@bs.optional]
  backButton: optionsTopBarBackButton,
  [@bs.optional]
  leftButtons: array(optionsTopBarButton),
  [@bs.optional]
  rightButtons: array(optionsTopBarButton),
  [@bs.optional]
  background: optionsTopBarBackground,
  [@bs.optional]
  barStyle: string,
  [@bs.optional]
  noBorder: bool,
  [@bs.optional]
  searchBar: bool,
  [@bs.optional]
  searchBarHiddenWhenScrolling: bool,
  [@bs.optional]
  searchBarPlaceholder: string,
  [@bs.optional]
  hideNavBarOnFocusSearchBar: bool,
  [@bs.optional]
  largeTitle: optionsTopBarLargeTitle,
  [@bs.optional]
  height: androidDensityNumber,
  [@bs.optional]
  borderColor: ReactNative.Color.t,
  [@bs.optional]
  borderHeight: androidDensityNumber,
  [@bs.optional]
  elevation: androidDensityNumber,
  [@bs.optional]
  topMargin: float,
  [@bs.optional]
  transparent: bool,
};

type optionsOverlay;
[@bs.obj]
external optionsOverlay:
  (~interceptTouchOutside: bool=?, ~handleKeyboardEvents: bool=?, unit) =>
  optionsOverlay;

type navigationOptions;
[@bs.obj]
external navigationOptions:
  (
    ~layout: optionsLayout=?,
    ~topBar: optionsTopBar=?,
    ~overlay: optionsOverlay=?,
    ~animations: optionsAnimations=?,
    ~bottomTab: optionsBottomTabs=?,
    unit
  ) =>
  navigationOptions;

type layoutComponent;
[@bs.obj]
external layoutComponent:
  (
    ~id: string=?,
    ~name: string=?,
    ~options: navigationOptions=?,
    ~passProps: props('a)=?,
    unit
  ) =>
  layoutComponent;

type layoutStackChildren;
[@bs.obj]
external layoutStackChildren:
  (~component: layoutComponent=?) => layoutStackChildren;

type layoutStack;
[@bs.obj]
external layoutStack:
  (
    ~id: string,
    ~children: array(layoutStackChildren),
    ~options: navigationOptions=?,
    unit
  ) =>
  layoutStack;

[@bs.deriving abstract]
type layout('p) = {
  [@bs.optional]
  component: layoutComponent,
  [@bs.optional]
  stack: layoutStack,
};
[@bs.deriving abstract]
type optionsStack = {
  [@bs.optional]
  animations: optionsAnimations,
  [@bs.optional]
  layout: optionsLayout,
  [@bs.optional]
  topBar: optionsTopBar,
};
type optionsModalPresentationStyle = [
  | `formSheet
  | `pageSheet
  | `overFullScreen
  | `overCurrentContext
  | `overCurrentContext
  | `currentContext
  | `popover
  | `fullScreen
  | `none
];
type optionsDefault = {
  modalPresentationStyle: option(optionsModalPresentationStyle),
  animations: option(optionsAnimations),
  modalInPresentation: bool,
};
[@bs.deriving abstract]
type optionsBottomTab = {
  [@bs.optional]
  text: string,
  [@bs.optional]
  fontSize: float,
  [@bs.optional]
  selectedFontSize: float,
};
[@bs.deriving abstract]
type optionsStatusBar = {
  [@bs.optional]
  backgroundColor: string,
};

type defaultOptions;
[@bs.obj]
external defaultOptions:
  (
    ~statusBar: optionsStatusBar=?,
    ~topBar: optionsTopBar=?,
    ~bottomTab: optionsBottomTab=?,
    unit
  ) =>
  defaultOptions;

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setDefaultOptions: defaultOptions => unit = "setDefaultOptions";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external showOverlay: layout('a) => unit = "showOverlay";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external dismissOverlay: string => unit = "dismissOverlay";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external showModal: layout('a) => unit = "showModal";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external pop: string => unit = "pop";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external push: (string, layout('a)) => unit = "push";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external pushChild: (string, layoutStackChildren) => unit = "push";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external dismissModal: string => unit = "dismissModal";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external dismissAllModals: unit => Promise.t(unit) = "dismissAllModals";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external popToRoot: string => unit = "popToRoot";

type searchBarUpdatedEvent = {
  text: string,
  isFocussed: bool,
};

type searchBarCancelPressedEvent = {componentName: option(string)};
type didDisappearListenerEvent = {
  componentId: string,
  componentName: string,
};
type registerLaunchListenerEvent;
type searchBarUpdatedCallback = searchBarUpdatedEvent => unit;
type searchBarCancelPressedCallback = searchBarCancelPressedEvent => unit;
type didDisappearCallback = didDisappearListenerEvent => unit;
type registerLaunchListenerCallback = registerLaunchListenerEvent => unit;

type emitterSubscription = {remove: (. unit) => unit};

type eventRegistry = {
  registerSearchBarUpdatedListener:
    (. searchBarUpdatedCallback) => emitterSubscription,
  registerSearchBarCancelPressedListener:
    (. searchBarCancelPressedCallback) => emitterSubscription,
  registerComponentDidDisappearListener:
    (. didDisappearCallback) => emitterSubscription,
  registerAppLaunchedListener:
    (. registerLaunchListenerEvent) => emitterSubscription,
};

[@bs.deriving abstract]
type stacks = {
  [@bs.optional]
  stack: array(layoutStack),
};

[@bs.deriving abstract]
type bottomTabsChildren = {
  [@bs.optional]
  children: array(layoutStack),
};
[@bs.deriving abstract]
type bottomTabsStack = {
  [@bs.optional]
  id: string,
  [@bs.optional]
  children: array(layoutStack),
  [@bs.optional]
  options: navigationOptions,
};

[@bs.deriving abstract]
type optionsStacks = {
  [@bs.optional]
  stack: layoutStack,
};

[@bs.deriving abstract]
type bottomTabs = {
  [@bs.optional]
  children: array(optionsStacks),
};
[@bs.deriving abstract]
type bottomTabsOptions = {
  [@bs.optional]
  children: array(optionsStacks),
};
[@bs.deriving abstract]
type stackOptions = {
  [@bs.optional]
  stack: layoutStack,
  [@bs.optional]
  bottomTabs,

};
[@bs.deriving abstract]
type rootOptions = {
  [@bs.optional]
  root: stackOptions,
};
[@bs.deriving abstract]
type bottomTabsDocs = {
  [@bs.optional]
  id: string,
  [@bs.optional]
  children: array(layoutStackChildren),
  [@bs.optional]
  options: navigationOptions,
};
[@bs.deriving abstract]
type rootBottomTabsDocs = {
  [@bs.optional]
  bottomTabs: bottomTabsDocs,
};
[@bs.deriving abstract]
type rootTabOptions = {
  [@bs.optional]
  root: rootBottomTabsDocs,
};
type tabSettings;
[@bs.obj]
external tabSettings:
  (
    ~id: string=?,
    ~children: array(layoutStackChildren),
    ~options: navigationOptions=?,
    unit
  ) =>
  tabSettings;
[@bs.deriving abstract]
type tabSettingsStack = {
  [@bs.optional]
  stack: tabSettings,
};
type stackChild;
[@bs.obj]
external stackChild: (~children: array(tabSettingsStack)=?, unit) => stackChild;
type bottomTabSettings;
[@bs.obj]
external bottomTabSettings:
  (~bottomTabs: array(tabSettingsStack)=?, unit) => bottomTabSettings;
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external register: (string, 'a) => React.element = "registerComponent";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external registerComponent: (string, 'a) => React.element =
  "registerComponent";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setRoot: unit => Js.Promise.t(unit) = "setRoot";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setRootOptions: rootOptions => Js.Promise.t(unit) = "setRoot";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setRootTabs: bottomTabSettings => Js.Promise.t(unit) = "setRoot";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external events: unit => eventRegistry = "events";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external mergeOptions: (string, navigationOptions) => eventRegistry =
  "mergeOptions";

let useSearchBarText = () => {
  let (searchBarText, setSearchBarText) = React.useState(_ => "");
  React.useEffect1(
    () => {
      let subscription =
        events().registerSearchBarUpdatedListener(. ({text}) => {
          setSearchBarText(_ => text)
        });
      let subscription2 =
        events().registerSearchBarCancelPressedListener(. _ => {
          setSearchBarText(_ => "")
        });

      Some(
        () => {
          subscription.remove(.);
          subscription2.remove(.);
        },
      );
    },
    [||],
  );
  searchBarText;
};
let useDidDisappear = fn => {
  React.useEffect(() => {
    let subscription =
      events().registerComponentDidDisappearListener(. ({componentId}) => {
        fn(. componentId)
      });

    Some(() => subscription.remove(.));
  });
};
// /* EVENTS */
// type events;
// [@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
// external events: (. unit) => events = "events";
// [@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
// external _registerAppLaunchedListener: (. events, (. unit) => unit) => unit =
//   "registerAppLaunchedListener";

// // let onAppLaunched = (f: unit => unit) =>
// //   events()->_registerAppLaunchedListener(f)

// let onAppLaunched = fn => {
//   React.useEffect(() => {
//     let subscription = events(.)-> _registerAppLaunchedListener(. _ => {fn(.)});

//     Some(() => subscription.remove(.));
//   });
// };
/* EVENTS */
type events;
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external events: unit => events = "events";

[@bs.send]
external _registerAppLaunchedListener: (events, unit => unit) => unit =
  "registerAppLaunchedListener";

let onAppLaunched = (f: unit => unit) =>
  events()->_registerAppLaunchedListener(f);
