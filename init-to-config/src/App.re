[@react.component]
let make = (~name) => {
  <p>{React.string("Ola! " ++ name)}</p>
}

let default = make;
