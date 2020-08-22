let id = "HOME_TAB";

let screen = () =>
  Navigation.(
    layoutStackChildren(
      ~component=
        layoutComponent(
          ~id="HOME_TAB",
          ~name="HomeTabScreen",
          ~options=
            navigationOptions(
              ~bottomTab=optionsBottomTabs(~icon=HomeIcon.image, ()),
              ~animations=
                optionsAnimations(
                  ~setRoot=waitForRender(~waitForRender=true, ()),
                  (),
                ),
              (),
            ),
          (),
        ),
    )
  );

let push = () => {
  Navigation.pushChild(id, screen());
};
