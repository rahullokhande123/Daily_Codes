import axios from "axios";
import { useState } from "react";
import Table from 'react-bootstrap/Table';

const Search=()=>{
  const [rno,setrno]=useState("");
  const [mydata,setdata]=useState([]);

  const handlesearch=()=>{
    let url=`http://localhost:3000/Student/?rollno=${rno}`
    axios.get(url).then((res)=>{
      setdata(res.data)
    })
  }
  let ans =mydata.map((key)=>{
    return(
      <>
      <tr>
        <td>{key.rollno}</td>
        <td>{key.name}</td>
        <td>{key.city}</td>
        <td>{key.fees}</td>
      </tr>
      </>
    )
  })
    return(
        <>
          <h1> Search Students Record</h1>
          <input type="text" value={rno} onChange={(e)=>{setrno(e.target.value)}}/>
          <button onClick={handlesearch}>Search</button>
          <Table striped bordered hover>
          <thead>
            <tr>
              <th>Roll No</th>
              <th>Name</th>
              <th>City</th>
              <th>Fees</th>
        </tr>
      </thead>
      <tbody>
        {ans}
      </tbody>
          </Table>
        </>
    )
}


export default Search;