// import axios from "axios";
// import { useEffect } from "react";
// import { useState } from "react";

// const Gallery=()=>{

//     const [input,setInput]=useState([])

//     const loadData=()=>{
//         let url="http://localhost:3000/Student";
//         axios.get(url).then((res)=>{
//             setInput(res.data)
//         })
//     }    

//     useEffect(()=>{
//         loadData();
//     },[])

//     const ans=input.map((key)=>{
//          return(
//             <>
//               <tr>
//                  <td>{key.empid}</td>
//                  <td>{key.name}</td>
//                  <td>{key.designation}</td>
//                  <td>{key.department}</td>
//                  <td>{key.salary}</td>
//              </tr>
//             </>
//          )
//     })
//     return(

//         <>
//         <h1>Display Page</h1>
//         <tr>
//             <th>Emp Id</th>
//             <th>Name</th>
//             <th>Designation</th>
//             <th>Department</th>
//             <th>Salary</th>
//         </tr>
//         {ans}
//         </>
//     )
// }
// export default Gallery;