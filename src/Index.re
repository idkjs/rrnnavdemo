let setDefaultOptions = () =>
  Navigation.setDefaultOptionsRaw({
    "root": {
      statusBar: {
        backgroundColor: "#4d089a",
      },
      topBar: {
        title: {
          color: "white",
        },
        backButton: {
          color: "white",
        },
        background: {
          color: "#4d089a",
        },
      },
      bottomTab: {
        fontSize: 14,
        selectedFontSize: 14,
      },
    },
  });

// RegisterScreens.registerScreens();
// BaseRegisterScreens.registerScreens();

// let childrenO:array(stack('a)) = [|stack4,stack3,stack2|];

// let rootObj = {
//   "root": {
//     bottomTabs: {
//       children:childrenO
//     },
//   },
// };
let rootConfig = {
  "root": {
    bottomTabs: {
      children: [
        {
          stack: {
            children: [{
                         component: {
                           name: "Home",
                         },
                       }],
          },
        },
        {
          stack: {
            children: [{
                         component: {
                           name: "Settings",
                         },
                       }],
          },
        },
      ],
    },
  },
};
let setRoot = () => {
  Navigation.setRoot(rootConfig);
};
let start = () => {
  RegisterScreens.registerScreens() |> (_ => setDefaultOptions());
  Navigation.onAppLaunched(() => setRoot());
};