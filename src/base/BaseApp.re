
let root = {
  "root": {
    component: {
      name: "TestScreenModule",
    },
  },
};

BaseRegisterScreens.registerScreens();

Base.onAppLaunched(() => {Base.setRoot(root)});
