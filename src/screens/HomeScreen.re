let id = "Home";

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
                  ~title=optionsTopBarTitle(~text="Home", ~color="white", ()),
                  ~background=optionsTopBarBackground(~color="#4d089a", ()),
                  (),
                ),
              ~bottomTabs=optionsBottomTabs(~text="Home", ()),
              (),
            )
          ),
        (),
      ),
  );

let push = () => {
  Navigation.pushChild(id, screen());
};
