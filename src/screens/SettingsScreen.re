let id = "Settings";

let screen = () =>
  Navigation.layoutStackChildren(
    ~component=
      Navigation.layoutComponent(
        ~id,
        ~name="rrnnavdemo" ++ id,
        ~options=
          Navigation.(
            navigationOptions(
              ~topBar=
                optionsTopBar(
                  ~title=
                    optionsTopBarTitle(~text="Settings", ~color="white", ()),
                  ~background=optionsTopBarBackground(~color="#4d089a", ()),
                  (),
                ),
              ~bottomTab=optionsBottomTabs(~text="Settings", ()),
              (),
            )
          ),
        (),
      ),
  );

let push = () => {
  Navigation.pushChild(id, screen());
};
