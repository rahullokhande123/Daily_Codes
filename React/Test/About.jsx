// import Button from 'react-bootstrap/Button';
// import Form from 'react-bootstrap/Form';
// import { Container } from 'react-bootstrap';
// import { useState } from 'react';
// import axios from 'axios';


// const About=()=>{
//   const [input,setInput]=useState({})

//   const handlechange=(e)=>{
//     let name=e.target.name;
//     let value=e.target.value
//     setInput(values=>({...values,[name]:value}))
//   }

//   const handleclick=()=>{
//     let url="http://localhost:3000/Student";
//     axios.post(url,input).then((res)=>{
//       alert("DATA POSTED SUCCESSFULLY")
//       setInput({});
//     }).catch((err)=>{
//       console.log("Error",err);
//     })
//   }
//   return(
    
//     <>
//     <Container>
//     <h1>Insert</h1>
//     <Form>
//       <Form.Group className="mb-3" controlId="formBasicEmail">
//         <Form.Label>Employee ID</Form.Label>
//         <Form.Control type="text" name="empid" value={input.empid} onChange={handlechange}  />
//       </Form.Group>

//       <Form.Group className="mb-3" controlId="formBasicPassword">
//         <Form.Label>Name</Form.Label>
//         <Form.Control type="text" name="name" value={input.name} onChange={handlechange} />
//       </Form.Group>

//       <Form.Group className="mb-3" controlId="formBasicPassword">
//         <Form.Label>Designation</Form.Label>
//         <Form.Control type="text" name="designation" value={input.designation} onChange={handlechange} />
//       </Form.Group>

//       <Form.Group className="mb-3" controlId="formBasicPassword">
//         <Form.Label>Department</Form.Label>
//         <Form.Control type="text" name="department" value={input.department} onChange={handlechange}  />
//       </Form.Group>
    
//       <Form.Group className="mb-3" controlId="formBasicPassword">
//         <Form.Label>Basic Salary</Form.Label>
//         <Form.Control type="text" name="salary" value={input.salary} onChange={handlechange} />
//       </Form.Group>

//       <Button variant="primary" type="submit" onClick={handleclick}>
//         Submit
//       </Button>
//     </Form>
//     </Container>
//     </>
  
//   )
// }
// export default About;