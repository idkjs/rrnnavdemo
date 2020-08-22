[@bs.deriving abstract]
type bottomTabs = {
  [@bs.optional]
  id: string,
  [@bs.optional]
  children: array(Navigation.layoutStackChildren),
  [@bs.optional]
  options: Navigation.navigationOptions,
};
[@bs.deriving abstract]
type stackOptions = {
  [@bs.optional]
  stack: Navigation.layoutStack,
  [@bs.optional]
  bottomTabs,
};
[@bs.deriving abstract]
type rootOptions = {
  [@bs.optional]
  root: stackOptions,
};

let id = "PROFILE_SCREEN";
let screen = () =>
  Navigation.(
    layoutStackChildren(
      ~component=
        layoutComponent(
          ~id,
          ~name="ProfileScreen",
          ~options=
            navigationOptions(
              ~bottomTab=optionsBottomTabs(~icon=ProfileIcon.image, ()),
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
