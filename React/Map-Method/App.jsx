const name=["Ram","Syam","Mohan","Sohan"];
const ans=name.map((key)=>{
  return(
    <>
    <h1>{key}</h1>
    </>
  )
})

const App=()=>{
  
  return(
    <>
     <h1>Welcome to cybrom </h1>
     {ans}
    </>
  )
}
export default App;
