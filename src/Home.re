open ReactNative;

let styles =
  Style.(
    StyleSheet.create({
      // style may be defined inline
      "home":
        style(
          ~flex=1.,
          ~alignItems=`center,
          ~justifyContent=`center,
          ~backgroundColor="whitesmoke",
          (),
        ),
    })
  );
type optionsTopBarBackground = {color: option(ReactNative.Color.t)};
type optionsTopBarTitle = {
  text: option(string),
  fontSize: option(float),
  color: option(ReactNative.Color.t),
  fontFamily: option(string),
  height: option(float),
  alignment: option(string),
  background: option(ReactNative.Color.t),
};
type topBar2 = {
  title: optionsTopBarTitle,
  background: optionsTopBarBackground,
};
let backgroundColor:ReactNative.Color.t = "#4d089a";
let options2: topBar2 = {
  title: {
    text: Some("Home"),
    color: Some("white"),
    fontSize: None,
    fontFamily: None,
    height: None,
    alignment: None,
    background: None,
  },
  background: {
    color: Some(backgroundColor),
  },
};
type optionsTopBarTitleJS = {
  text: Js.Nullable.t(string),
  fontSize: Js.Nullable.t(float),
  color: Js.Nullable.t(ReactNative.Color.t),
  fontFamily: Js.Nullable.t(string),
  height: Js.Nullable.t(float),
  alignment: Js.Nullable.t(string),
  background: Js.Nullable.t(ReactNative.Color.t),
};

type optionsTopBarBackgroundJS = {color: ReactNative.Color.t};

type color = string;
type background = {color};

type topBarJs = {
  title: optionsTopBarTitleJS,
  background: option(optionsTopBarBackgroundJS),
};
let backgroundColorJs:optionsTopBarBackgroundJS = ({color:"#4d089a"});
// let topBarJs: topBarJs = {
//   title: {
//     text: Js.Nullable.return("Home"),
//     color: Js.Nullable.return("white"),
//     fontSize: Js.Nullable.undefined,
//     fontFamily: Js.Nullable.undefined,
//     height: Js.Nullable.undefined,
//     alignment: Js.Nullable.undefined,
//     background: Js.Nullable.undefined,
//   },
//   background: Js.Nullable.return(Some(backgroundColor)),
// };
type topBar = {
  title,
  background,
}
and title = {
  text: string,
  color,
};

type options = {topBar};

//   HomeScreen.options = {
//     topBar: {
//       title: {
//         text: 'Home',
//         color: 'white'
//       },
//       background: {
//         color: '#4d089a'
//       }
//     }
//   }
let options: options = {
  topBar: {
    title: {
      text: "Home",
      color: "white",
    },
    background: {
      color: "#4d089a",
    },
  },
};
[@react.component]
let make = () => {
  <View style={styles##home}>
    <Text> "Hello React Native Navigation 👋"->React.string </Text>
  </View>;
};
