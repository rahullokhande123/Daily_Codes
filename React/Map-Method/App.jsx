// const name=["Ram","Syam","Mohan","Sohan"];
// const ans=name.map((key)=>{
//   return(
//     <>
//     <h1>{key}</h1>
//     </>
//   )
// })

// const App=()=>{
  
//   return(
//     <>
//      <h1>Welcome to cybrom </h1>
//      {ans}
//     </>
//   )
// }
// export default App;

//===========================================

// const age=[24,20,6,8,10,13];
// const ans=age.map((key)=>{
//   return(
//     <>
//     <h1>{key*2}</h1>
//     </>
//   )
// })

// const App=()=>{
  
//   return(
//     <>
//      <h1>Welcome to cybrom </h1>
//      {ans}
//     </>
//   )
// }
// export default App;

//==============================================

const city=["Bhopal","Indore","Gwalior","Ujjain"];
const ans=city.map((key)=>{
  return(
    <>
    <option>{key}</option>
    </>
  )
})

const App=()=>{
  
  return(
    <>
     <select>{ans}</select>
    </>
  )
}
export default App;


