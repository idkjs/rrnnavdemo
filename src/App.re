let root = {
  "root": {
    component: {
      name: "TestScreenModule",
    },
  },
};

RegisterScreens.registerScreens();

Navigation.onAppLaunched(() => {
  Navigation.setRoot(root)
  // |> Js.Promise.then_(_result => {Js.Promise.resolve()})
  // |> ignore
});