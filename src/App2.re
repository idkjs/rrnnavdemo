
let root = {
  "root": {
    component: {
      name: "TestScreenModule",
    },
  },
};

Screens.registerScreens();

Base.onAppLaunched(() => {Base.setRoot(root)});
